
//gaussianfilter.cpp
#include <opencv2/opencv.hpp>
#include"mystudy.h"

using namespace cv;

void gaussian(Mat img_in) {
	Mat img = img_in;
	Mat blurredImg;						//가우시안 처리가 된 이미지를 담을 변수

	/*if (img.empty())
		return -1;*/

	namedWindow("img", WINDOW_AUTOSIZE);		// 입력 결과를 넣을 윈도우 만들기
	namedWindow("blurredImg", WINDOW_AUTOSIZE);	// 출력 결과를 넣을 윈도우 만들기

	imshow("img", img);

	GaussianBlur(img, blurredImg, Size(5, 5), 3, 3);
	GaussianBlur(blurredImg, blurredImg, Size(5, 5), 3, 3);

	imshow("blurredImg", blurredImg);

	waitKey(0);


}