
#include <iostream>

#include <opencv2\highgui.hpp>
#include <opencv2\core.hpp>
#include <opencv2/imgproc.hpp> // cv::cvtColor �Լ��� ����ϱ� ���� �ʿ�. 
#include"mystudy.h"

using namespace cv;
using namespace std;

void w_sum(Mat img_in1, Mat img_in2)

{	
	Mat img1 = img_in1;
	Mat img2 = img_in2;

	/* 2���� �÷� �̹��� ������ */

	Mat result1;

	addWeighted(img1, 0.7, img2, 0.9, 0.0, result1);	// result = 0.7 * img1 + 0.9 * img2 + 0.0

	imshow("Result1", result1);





	/* �ٸ� ������� 2���� �÷� �̹��� ������ */

	Mat result2;

	result2 = 0.7 * img1 + 0.9 * img2;

	imshow("Result2", result2);





	/* �ʷ� ä�ο��� 2���� �̹��� ������ */

	Mat img2_gray;

	Mat result3;

	cvtColor(img2, img2_gray, COLOR_BGR2GRAY); // �÷� �����̴� img2�� �׷��� �������� ��ȯ. 



	vector<Mat> planes; // 3�� ������ ���� ����: Mat Ŭ������ ��ü�� �����ϴ� ���� �迭

	split(img1, planes); // 3ä���� ���� ������ 3���� 1ä�� �������� �и�

	planes[1] += img2_gray; // �ʷ� ä�ο� ���ϱ�: Blue (planes[0]) ,  Red (planes[2]) 

	merge(planes, result3); // 3���� 1ä�� ������ 3ä���� ���� �������� ����

	imshow("Result3", result3);


	waitKey(0);


}