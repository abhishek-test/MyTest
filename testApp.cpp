#include "opencv2/imgproc/imgproc.hpp"
#include "opencv2/core/core.hpp"
#include "opencv2/highgui/highgui.hpp"
#include <iostream>

using namespace std;
using namespace cv;

int main()
{
   VideoCapture vid(0);
   if(!vid.isOpened())
     { cout << " !! Error reading camera " << endl; return -1; }

   Mat inputFrame;

   while(1)
   {
	vid >> inputFrame;
	laneTracking(inputFrame);
	if(waitKey(30) == 27)
		break;
   }
}
