uniform sampler2D  sTexture;

varying lowp    float  LightIntensity;
varying mediump vec2   TexCoord;

void main()
{
    gl_FragColor.rgb = texture2D(sTexture, TexCoord).bbb;
  
    //gl_FragColor.rgb = vec3(1.0, 1.0, 1.0);
    gl_FragColor.a = 1.0;
}
