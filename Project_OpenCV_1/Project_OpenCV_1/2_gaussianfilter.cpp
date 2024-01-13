
//gaussianfilter.cpp
#include <opencv2/opencv.hpp>
#include"mystudy.h"

using namespace cv;

void gaussian(Mat img_in) {
	Mat img = img_in;
	Mat blurredImg;						//����þ� ó���� �� �̹����� ���� ����

	/*if (img.empty())
		return -1;*/

	namedWindow("img", WINDOW_AUTOSIZE);		// �Է� ����� ���� ������ �����
	namedWindow("blurredImg", WINDOW_AUTOSIZE);	// ��� ����� ���� ������ �����

	imshow("img", img);

	GaussianBlur(img, blurredImg, Size(5, 5), 3, 3);
	GaussianBlur(blurredImg, blurredImg, Size(5, 5), 3, 3);

	imshow("blurredImg", blurredImg);

	waitKey(0);


}