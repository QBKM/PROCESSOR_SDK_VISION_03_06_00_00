#include "box.h"

#define BoxLUT_count 12

Pose3D_f BoxPose3D[] =
{
       //Single element
       {
               //Matrix3D_f R - Rotation matrix
               {
                       0.5, 0.866, 0.0,
                       -0.866, 0.5, 0.0,
                       0.0, 0.0, 1.0
               },
               //Point3D_f t
               {0.0,-400.0,0.0},
       }
};


ObjectBox BoxLUT[] =
{
		//Box 0
		{
				//Vertices
				{
						{
#if 0
							{120.000005,-479.999989,0.000000},
							{359.999955,-479.999989,0.000000},
							{359.999955,-339.999974,0.000000},
							{120.000005,-339.999974,0.000000},
							{120.000005,-479.999989,278.431386},
							{359.999955,-479.999989,278.431386},
							{359.999955,-339.999974,278.431386},
							{120.000005,-339.999974,278.431386}
#else
/*
								{440.0,440.0,0.0},
								{540.0,440.0,0.0},
								{440.0,540.0,0.0},
								{540.0,540.0,0.0},
								{440.0,440.0,220.0},
								{540.0,440.0,220.0},
								{440.0,540.0,220.0},
								{540.0,540.0,220.0}*/
/*
								{300.0,200.0,0.0},
								{400.0,200.0,0.0},
								{400.0,400.0,0.0},
								{300.0,400.0,0.0},
								{300.0,200.0,200.0},
								{400.0,200.0,200.0},
								{400.0,400.0,200.0},
								{300.0,400.0,200.0}

*/
								{-400.0, -200.0,   0.0},
								{ 400.0, -200.0,   0.0},
								{ 400.0,  200.0,   0.0},
								{-400.0,  200.0,   0.0},
								{-400.0, -200.0, 200.0},
								{ 400.0, -200.0, 200.0},
								{ 400.0,  200.0, 200.0},
								{-400.0,  200.0, 200.0}
								
#endif
						}
				},
				//Center
				{0,0,100},
				//SumProbs
				47,
				//Age
				15
		},
		//Box 1
		{
				//Vertices
				{
						{
							{-420.000017,100.000024,0.000000},
							{-340.000004,100.000024,0.000000},
							{-340.000004,220.000029,0.000000},
							{-420.000017,220.000029,0.000000},
							{-420.000017,100.000024,227.450982},
							{-340.000004,100.000024,227.450982},
							{-340.000004,220.000029,227.450982},
							{-420.000017,220.000029,227.450982}
						}
				},
				//Center
				{-434.285045,184.276477,129.972026},
				//SumProbs
				18,
				//Age
				0//5
		},
		//Box 2
		{
				//Vertices
				{
						{
							{-400.000006,-240.000010,0.000000},
							{-300.000012,-240.000010,0.000000},
							{-300.000012,-139.999986,0.000000},
							{-400.000006,-139.999986,0.000000},
							{-400.000006,-240.000010,194.117650},
							{-300.000012,-240.000010,194.117650},
							{-300.000012,-139.999986,194.117650},
							{-400.000006,-139.999986,194.117650}
						}
				},
				//Center
				{-315.714628,-248.571277,116.946764},
				//SumProbs
				11,
				//Age
				0//1
		},
		//Box 3
		{
				//Vertices
				{
						{
							{0.0,0.0,0.0},
							{0.0,0.0,0.0},
							{0.0,0.0,0.0},
							{0.0,0.0,0.0},
							{0.0,0.0,0.0},
							{0.0,0.0,0.0},
							{0.0,0.0,0.0},
							{0.0,0.0,0.0}
						}
				},
				//Center
				{0.0,0.0,0.0},
				//SumProbs
				0,
				//Age
				0
		},
		//Box 4
		{
				//Vertices
				{
						{
							{0.0,0.0,0.0},
							{0.0,0.0,0.0},
							{0.0,0.0,0.0},
							{0.0,0.0,0.0},
							{0.0,0.0,0.0},
							{0.0,0.0,0.0},
							{0.0,0.0,0.0},
							{0.0,0.0,0.0}
						}
				},
				//Center
				{0.0,0.0,0.0},
				//SumProbs
				0,
				//Age
				0
		},
		//Box 5
		{
				//Vertices
				{
						{
							{0.0,0.0,0.0},
							{0.0,0.0,0.0},
							{0.0,0.0,0.0},
							{0.0,0.0,0.0},
							{0.0,0.0,0.0},
							{0.0,0.0,0.0},
							{0.0,0.0,0.0},
							{0.0,0.0,0.0}
						}
				},
				//Center
				{0.0,0.0,0.0},
				//SumProbs
				0,
				//Age
				0
		},
		//Box 6
		{
				//Vertices
				{
						{
							{0.0,0.0,0.0},
							{0.0,0.0,0.0},
							{0.0,0.0,0.0},
							{0.0,0.0,0.0},
							{0.0,0.0,0.0},
							{0.0,0.0,0.0},
							{0.0,0.0,0.0},
							{0.0,0.0,0.0}
						}
				},
				//Center
				{0.0,0.0,0.0},
				//SumProbs
				0,
				//Age
				0
		},
		//Box 7
		{
				//Vertices
				{
						{
							{0.0,0.0,0.0},
							{0.0,0.0,0.0},
							{0.0,0.0,0.0},
							{0.0,0.0,0.0},
							{0.0,0.0,0.0},
							{0.0,0.0,0.0},
							{0.0,0.0,0.0},
							{0.0,0.0,0.0}
						}
				},
				//Center
				{0.0,0.0,0.0},
				//SumProbs
				0,
				//Age
				0
		},
		//Box 8
		{
				//Vertices
				{
						{
							{0.0,0.0,0.0},
							{0.0,0.0,0.0},
							{0.0,0.0,0.0},
							{0.0,0.0,0.0},
							{0.0,0.0,0.0},
							{0.0,0.0,0.0},
							{0.0,0.0,0.0},
							{0.0,0.0,0.0}
						}
				},
				//Center
				{0.0,0.0,0.0},
				//SumProbs
				0,
				//Age
				0
		},
		//Box 9
		{
				//Vertices
				{
						{
							{0.0,0.0,0.0},
							{0.0,0.0,0.0},
							{0.0,0.0,0.0},
							{0.0,0.0,0.0},
							{0.0,0.0,0.0},
							{0.0,0.0,0.0},
							{0.0,0.0,0.0},
							{0.0,0.0,0.0}
						}
				},
				//Center
				{0.0,0.0,0.0},
				//SumProbs
				0,
				//Age
				0
		},
		//Box 10
		{
				//Vertices
				{
						{
							{0.0,0.0,0.0},
							{0.0,0.0,0.0},
							{0.0,0.0,0.0},
							{0.0,0.0,0.0},
							{0.0,0.0,0.0},
							{0.0,0.0,0.0},
							{0.0,0.0,0.0},
							{0.0,0.0,0.0}
						}
				},
				//Center
				{0.0,0.0,0.0},
				//SumProbs
				0,
				//Age
				0
		},
		//Box 11
		{
				//Vertices
				{
						{
							{0.0,0.0,0.0},
							{0.0,0.0,0.0},
							{0.0,0.0,0.0},
							{0.0,0.0,0.0},
							{0.0,0.0,0.0},
							{0.0,0.0,0.0},
							{0.0,0.0,0.0},
							{0.0,0.0,0.0}
						}
				},
				//Center
				{0.0,0.0,0.0},
				//SumProbs
				0,
				//Age
				0
		},
};



