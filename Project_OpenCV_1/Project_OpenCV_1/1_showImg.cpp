
//showImg.cpp
#include"mystudy.h"
#include<opencv2/imgcodecs.hpp>
#include<opencv2/video.hpp>
#include<opencv2/highgui.hpp>

using namespace cv;

void showImg(Mat img_in) {
	Mat img = img_in;
	imshow("img", img); 
	waitKey(0);

}