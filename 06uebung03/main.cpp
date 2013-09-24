#include "opencv2/opencv.hpp"
#include "opencv2/highgui/highgui.hpp"
#include <string>
using namespace cv;
using namespace std;

void showVideo(){
	const string path = "Micro.avi";
	VideoCapture vcapture;
	vcapture.open(path);
	namedWindow( "video", CV_WINDOW_AUTOSIZE );
	while(true){
		Mat videoFrame;
		// Videoframe lesen
		bool success = vcapture.read(videoFrame);
		if (success == false){
			break;
		}
		imshow("video", videoFrame);
		int key = waitKey(30);
		if (key != -1)	
		{
			break;
		}
	}
}

int main(){
	showVideo();
	return 0;
}