/*******************************************************************************************************************************************

 @File         OGLES2HelloAPI_LinuxX11.cpp

 @Title        OpenGL ES 2.0 HelloAPI Tutorial

 @Version      

 @Copyright    Copyright (c) Imagination Technologies Limited.

 @Platform     

 @Description  Basic Tutorial that shows step-by-step how to initialize OpenGL ES 2.0, use it for drawing a triangle and terminate it.
               Entry Point: main

*******************************************************************************************************************************************/
/*******************************************************************************************************************************************
 Include Files
*******************************************************************************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "X11/Xlib.h"
#include "X11/Xutil.h"
#include <unistd.h>
#include <GL/glx.h>
#include <GL/gl.h>

#include "render.h"

#include "standalone/BlendLUT3D.c"
#include "standalone/GAlignLUT.c"
#include "standalone/BoxLUT.c"

#define GLX_CONTEXT_MAJOR_VERSION_ARB		0x2091
#define GLX_CONTEXT_MINOR_VERSION_ARB		0x2092
typedef GLXContext (*glXCreateContextAttribsARBProc)(Display*, GLXFBConfig, GLXContext, Bool, const int*);


FILE *outfile;
int srv_select = 3;
int srv_car = 1;
int srv_bowl = 1;
int srv_view = 2;
char *out_filename;
static GLXContext ctx;
static XVisualInfo *vi;
static GC gc;
extern int srv_param_select;
extern bool srv_param_car;
extern bool srv_param_bowl;
extern int srv_param_view1;
extern int srv_param_view2;
extern int srv_param_step;
extern bool srv_render_to_file;
extern int num_iterations;
render_state_t render3DSRVObj;
/*******************************************************************************************************************************************
 Defines
*******************************************************************************************************************************************/
// Name of the application
#define APPLICATION_NAME "Standalone 3DSRV"

// Width and height of the window
#define WINDOW_WIDTH	1920
#define WINDOW_HEIGHT	1080

/*******************************************************************************************************************************************
 Helper Functions
*******************************************************************************************************************************************/

/*******************************************************************************************************************************************
 Application Functions
*******************************************************************************************************************************************/

int load_texture_from_raw_file(GLuint tex, int width, int height, int textureType,  const char* filename, int offset);
// Helper to check for extension string presence.  Adapted from:
//   http://www.opengl.org/resources/features/OGLextensions/

static bool isExtensionSupported(const char *extList, const char *extension)
{
  const char *start;
  const char *where, *terminator;
 
  /* Extension names should not have spaces. */
  where = strchr(extension, ' ');
  if (where || *extension == '\0')
    return false;
 
  /* It takes a bit of care to be fool-proof about parsing the
     OpenGL extensions string. Don't be fooled by sub-strings,
     etc. */
  for (start=extList;;) {
    where = strstr(start, extension);
 
    if (!where)
      break;
 
    terminator = where + strlen(extension);
 
    if ( where == start || *(where - 1) == ' ' )
      if ( *terminator == ' ' || *terminator == '\0' )
        return true;
 
    start = terminator;
  }
 
  return false;
}
 
static bool ctxErrorOccurred = false;
static int ctxErrorHandler( Display *dpy, XErrorEvent *ev )
{
    ctxErrorOccurred = true;
    return 0;
}

static Window create_window(Display *display, unsigned int width, unsigned int height)
{
	int drawable_type;
	int double_buffer_enable;

	if(srv_render_to_file == true)
	{
		drawable_type = GLX_PIXMAP_BIT;
		double_buffer_enable = False;
	}
	else
	{
		drawable_type = GLX_WINDOW_BIT;
		double_buffer_enable = True;
	}
	// Get a matching FB config
	static int visual_attribs[] =
	{
		GLX_X_RENDERABLE    , True,
		GLX_DRAWABLE_TYPE   , drawable_type,
		GLX_RENDER_TYPE     , GLX_RGBA_BIT,
		GLX_X_VISUAL_TYPE   , GLX_TRUE_COLOR,
		GLX_RED_SIZE        , 8,
		GLX_GREEN_SIZE      , 8,
		GLX_BLUE_SIZE       , 8,
		GLX_ALPHA_SIZE      , 8,
		GLX_DEPTH_SIZE      , 24,
		GLX_STENCIL_SIZE    , 8,
		GLX_DOUBLEBUFFER    , double_buffer_enable,
		//GLX_SAMPLE_BUFFERS  , 1,
		//GLX_SAMPLES         , 4,
		None
	};

	int glx_major, glx_minor;

	Window win;

	// FBConfigs were added in GLX version 1.3.
	if ( !glXQueryVersion( display, &glx_major, &glx_minor ) || 
			( ( glx_major == 1 ) && ( glx_minor < 3 ) ) || ( glx_major < 1 ) )
	{
		printf("Invalid GLX version");
		exit(1);
	}

	printf( "Getting matching framebuffer configs\n" );

	int fbcount;

	GLXFBConfig* fbc = glXChooseFBConfig(display, DefaultScreen(display), visual_attribs, &fbcount);
	if (!fbc)
	{
		printf( "Failed to retrieve a framebuffer config\n" );
		exit(1);
	}
	printf( "Found %d matching FB configs.\n", fbcount );

	// Pick the FB config/visual with the most samples per pixel
	printf( "Getting XVisualInfos\n" );
	int best_fbc = -1, worst_fbc = -1, best_num_samp = -1, worst_num_samp = 999;

	int i;
	for (i=0; i<fbcount; ++i)
	{
		XVisualInfo *vi = glXGetVisualFromFBConfig( display, fbc[i] );
		if ( vi )
		{
			int samp_buf, samples;
			glXGetFBConfigAttrib( display, fbc[i], GLX_SAMPLE_BUFFERS, &samp_buf );
			glXGetFBConfigAttrib( display, fbc[i], GLX_SAMPLES       , &samples  );

			printf( "  Matching fbconfig %d, visual ID 0x%2x: SAMPLE_BUFFERS = %d,"
					" SAMPLES = %d\n", 
					i, vi -> visualid, samp_buf, samples );

			if ( best_fbc < 0 || samp_buf && samples > best_num_samp )
				best_fbc = i, best_num_samp = samples;
			if ( worst_fbc < 0 || !samp_buf || samples < worst_num_samp )
				worst_fbc = i, worst_num_samp = samples;
		}
		XFree( vi );
	}


	GLXFBConfig bestFbc = fbc[ best_fbc ];

	// Be sure to free the FBConfig list allocated by glXChooseFBConfig()
	XFree( fbc );

	// Get a visual
	vi = glXGetVisualFromFBConfig( display, bestFbc );
	printf( "Chosen visual ID = 0x%x\n", vi->visualid );

	printf( "Creating colormap\n" );
	XSetWindowAttributes swa;
	Colormap cmap;
	swa.colormap = cmap = XCreateColormap( display,
			RootWindow( display, vi->screen ), 
			vi->visual, AllocNone );
	swa.background_pixmap = None ;
	swa.border_pixel      = 0;
	swa.event_mask        = StructureNotifyMask;

	printf( "Creating window\n" );
	win = XCreateWindow( display, RootWindow( display, vi->screen ), 
			0, 0, width, height, 0, vi->depth, InputOutput, 
			vi->visual, 
			CWBorderPixel|CWColormap|CWEventMask, &swa );

	if ( !win )
	{
		printf( "Failed to create window.\n" );
		exit(1);
	}

	/* make an X GC so we can do XCopyArea later */
	gc = XCreateGC( display, win, 0, NULL );

	XStoreName( display, win, "GL 3.0 Window" );

	printf( "Mapping window\n" );
	XMapWindow( display, win );

	// Get the default screen's GLX extension list
	const char *glxExts = glXQueryExtensionsString( display,
			DefaultScreen( display ) );

	// NOTE: It is not necessary to create or make current to a context before
	// calling glXGetProcAddressARB
	glXCreateContextAttribsARBProc glXCreateContextAttribsARB = 0;
	glXCreateContextAttribsARB = (glXCreateContextAttribsARBProc)
		glXGetProcAddressARB( (const GLubyte *) "glXCreateContextAttribsARB" );

	// Install an X error handler so the application won't exit if GL 3.0
	// context allocation fails.
	//
	// Note this error handler is global.  All display connections in all threads
	// of a process use the same error handler, so be sure to guard against other
	// threads issuing X commands while this code is running.
	ctxErrorOccurred = false;
	int (*oldHandler)(Display*, XErrorEvent*) =
		XSetErrorHandler(&ctxErrorHandler);

	// Check for the GLX_ARB_create_context extension string and the function.
	// If either is not present, use GLX 1.3 context creation method.
	if ( !isExtensionSupported( glxExts, "GLX_ARB_create_context" ) ||
			!glXCreateContextAttribsARB )
	{
		printf( "glXCreateContextAttribsARB() not found"
				" ... using old-style GLX context\n" );
		ctx = glXCreateNewContext( display, bestFbc, GLX_RGBA_TYPE, 0, True );
	}

	// If it does, try to get a GL 3.0 context!
	else
	{
		int context_attribs[] =
		{
			GLX_CONTEXT_MAJOR_VERSION_ARB, 3,
			GLX_CONTEXT_MINOR_VERSION_ARB, 0,
			//GLX_CONTEXT_FLAGS_ARB        , GLX_CONTEXT_FORWARD_COMPATIBLE_BIT_ARB,
			None
		};

		printf( "Creating context\n" );
		ctx = glXCreateContextAttribsARB( display, bestFbc, 0,
				True, context_attribs );

		// Sync to ensure any errors generated are processed.
		XSync( display, False );
		if ( !ctxErrorOccurred && ctx )
			printf( "Created GL 3.0 context\n" );
		else
		{
			// Couldn't create GL 3.0 context.  Fall back to old-style 2.x context.
			// When a context version below 3.0 is requested, implementations will
			// return the newest context version compatible with OpenGL versions less
			// than version 3.0.
			// GLX_CONTEXT_MAJOR_VERSION_ARB = 1
			context_attribs[1] = 1;
			// GLX_CONTEXT_MINOR_VERSION_ARB = 0
			context_attribs[3] = 0;

			ctxErrorOccurred = false;

			printf( "Failed to create GL 3.0 context"
					" ... using old-style GLX context\n" );
			ctx = glXCreateContextAttribsARB( display, bestFbc, 0, 
					True, context_attribs );
		}
	}

	// Sync to ensure any errors generated are processed.
	XSync( display, False );

	// Restore the original error handler
	XSetErrorHandler( oldHandler );

	if ( ctxErrorOccurred || !ctx )
	{
		printf( "Failed to create an OpenGL context\n" );
		exit(1);
	}

	// Verifying that context is a direct context
	if ( ! glXIsDirect ( display, ctx ) )
	{
		printf( "Indirect GLX rendering context obtained\n" );
	}
	else
	{
		printf( "Direct GLX rendering context obtained\n" );
	}

	return win;
}

static GLXPixmap create_pixmap (Display *display, Window win, unsigned int width,
		unsigned int height, Pixmap *pixmap)
{
	Pixmap pm;
	GLXPixmap glxpm;
	XWindowAttributes attr;

	pm = XCreatePixmap( display, win, width, height, vi->depth );
	if (!pm) {
		printf("Error: XCreatePixmap failed\n");
		exit(-1);
	}

	XGetWindowAttributes( display, win, &attr );

	/*
	 * IMPORTANT:
	 *   Use the glXCreateGLXPixmapMESA funtion when using Mesa because
	 *   Mesa needs to know the colormap associated with a pixmap in order
	 *   to render correctly.  This is because Mesa allows RGB rendering
	 *   into any kind of visual, not just TrueColor or DirectColor.
	 */
#if 0//def GLX_MESA_pixmap_colormap
	if (strstr(glXQueryExtensionsString(display, 0), "GLX_MESA_pixmap_colormap")) {
		/* stand-alone Mesa, specify the colormap */
		glxpm = glXCreateGLXPixmapMESA( display, vi, pm, attr.colormap );
	}
	else {
		glxpm = glXCreateGLXPixmap( display, vi, pm );
	}
#else
	/* This will work with Mesa too if the visual is TrueColor or DirectColor */
	glxpm = glXCreateGLXPixmap( display, vi, pm );
#endif

	if (!glxpm) {
		printf("Error: GLXCreateGLXPixmap failed\n");
		exit(-1);
	}

	*pixmap = pm;

	return glxpm;
}

/*!*****************************************************************************************************************************************
 @Function		main
 @Input			argc                        Number of arguments passed to the application, ignored.
 @Input			argv           Command line strings passed to the application, ignored.
 @Return		Result code to send to the Operating System
 @Description	Main function of the program, executes other functions.
*******************************************************************************************************************************************/
int main(int argc, char **argv)
{
	// X11 variables
	Display* display = XOpenDisplay(0);
	Window win;
	Pixmap pm;
	GLXPixmap glxpm;

	if (!display)
	{
		printf("Failed to open X display\n");
		exit(1);
	}
	GLuint                       texYuv[4] = {0};



	if(argc > 1)
		srv_select = atoi(argv[1]);

	if(argc > 2)
		srv_car = atoi(argv[2]);

	if(argc > 3)
		srv_bowl = atoi(argv[3]);

	if(argc > 4)
		srv_view = atoi(argv[4]);

	if(argc > 5)
		outfile = fopen(argv[5], "wb");

	win = create_window(display, WINDOW_WIDTH, WINDOW_HEIGHT);
	//	win = make_rgb_window(display, WINDOW_WIDTH, WINDOW_HEIGHT);
	glxpm = create_pixmap( display, win, WINDOW_WIDTH, WINDOW_HEIGHT, &pm );

	if(srv_render_to_file == true)
	{
		glXMakeCurrent( display, glxpm, ctx );
	}
	else
	{
		glXMakeCurrent( display, win, ctx );
	}

#if 0 
	glClearColor( 0, 0.5, 1, 1 );
	glClear( GL_COLOR_BUFFER_BIT );
	glXSwapBuffers ( display, win );

	sleep( 1 );

	glClearColor ( 1, 0.5, 0, 1 );
	glClear ( GL_COLOR_BUFFER_BIT );
	glXSwapBuffers ( display, win );

	sleep( 1 );

	glXMakeCurrent( display, 0, 0 );
	glXDestroyContext( display, ctx );

	XDestroyWindow( display, win );
	XFreeColormap( display, cmap );
	XCloseDisplay( display );

	return 0;
#else
#if 1

	render3DSRVObj.screen_width = WINDOW_WIDTH;
	render3DSRVObj.screen_height = WINDOW_HEIGHT;
	if(render_setup(&render3DSRVObj) !=0 )
	{
		printf("render_setup failed\n");
		return 0;
	}


	printf("render_setup done\n");

	render3DSRVObj.LUT3D = (void *) GAlignLUT;
	render3DSRVObj.blendLUT3D = (void *) BlendLUT3D;
	render3DSRVObj.BoxLUT = (void *) BoxLUT;
	render3DSRVObj.BoxPose3D = (void *) BoxPose3D;

	glGenTextures(1, &texYuv[0]);
	GL_CHECK(glGenTextures);
	glBindTexture(GL_TEXTURE_2D, texYuv[0]);
	GL_CHECK(glBindTexture);
	load_texture_from_raw_file( texYuv[0], 1280, 720, GL_RGB,  "standalone/FG1.raw", 0);
	GL_CHECK(load_texture_from_raw_file);

	glGenTextures(1, &texYuv[1]);
	GL_CHECK(glGenTextures);
	glBindTexture(GL_TEXTURE_2D, texYuv[1]);
	GL_CHECK(glBindTexture);
	load_texture_from_raw_file( texYuv[1], 1280, 720, GL_RGB,  "standalone/FG2.raw", 0);
	GL_CHECK(load_texture_from_raw_file);

	glGenTextures(1, &texYuv[2]);
	GL_CHECK(glGenTextures);
	glBindTexture(GL_TEXTURE_2D, texYuv[2]);
	GL_CHECK(glBindTexture);
	load_texture_from_raw_file( texYuv[2], 1280, 720, GL_RGB,  "standalone/FG3.raw", 0);
	GL_CHECK(load_texture_from_raw_file);

	glGenTextures(1, &texYuv[3]);
	GL_CHECK(glGenTextures);
	glBindTexture(GL_TEXTURE_2D, texYuv[3]);
	GL_CHECK(glBindTexture);
	load_texture_from_raw_file( texYuv[3], 1280, 720, GL_RGB,  "standalone/FG4.raw", 0);
	GL_CHECK(load_texture_from_raw_file);

#endif

	if(srv_render_to_file == true)
	{
		srv_param_select = 0;

		for (srv_param_view1 = 0; srv_param_view1 < 3; srv_param_view1++)
		{
			srv_param_view2 = (srv_param_view1+1)%3;
			for(srv_param_select = 0; srv_param_select <= 3; srv_param_select++)
			{
				for(int i = 0; i < num_iterations; i++)
				{
					if(srv_param_select == 3)
					{
						srv_param_car = true;
						//srv_param_bowl = true;
						srv_param_bowl = false;
					}
					else
					{
						//srv_param_car = true;
						srv_param_car = false;
						srv_param_bowl = true;
					}
					srv_param_step = i;

					glXWaitX();

					render_renderFrame(
							&render3DSRVObj,
							NULL,
							texYuv
							);

					XCopyArea( display, pm, win,  /* src, dest */
							gc, 0, 0, WINDOW_WIDTH, WINDOW_HEIGHT,          /* gc, src pos, size */
							0, 0 );                      /* dest pos */

					XImage *image = XGetImage(display, pm, 0, 0, WINDOW_WIDTH, WINDOW_HEIGHT, AllPlanes, ZPixmap);
					if(!image)
					{
						printf("XGetImage returned error\n");
					}

					char filename[sizeof "from_00_to_01_step_000_select_0.raw"];
					sprintf(filename, "from_%02d_to_%02d_step_%03d_select_%01d.raw",
							srv_param_view1,
							srv_param_view2,
							srv_param_step,
							srv_param_select);


					outfile = fopen(filename, "wb");
					fwrite(image->data, image->bytes_per_line * image->height, 1, outfile);
					fclose(outfile);
					glFlush();
					glXWaitGL();
				}
			}
		}
	}
	else
	{
		srv_param_select = 3;
		srv_param_car = true;
		srv_param_bowl = true;
		while(1)
		{
			render_renderFrame(
					&render3DSRVObj,
					NULL,
					texYuv
					);
			glXSwapBuffers (display, win);

		}
	}
	return 0;
#endif
}

/*******************************************************************************************************************************************
  End of file (OGLES2HelloAPI_LinuxX11.cpp)
 *******************************************************************************************************************************************/
