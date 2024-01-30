
#include <iostream>

#include <opencv2\highgui.hpp>
#include <opencv2\core.hpp>
#include <opencv2/imgproc.hpp> // cv::cvtColor 함수를 사용하기 위해 필요. 
#include"mystudy.h"

using namespace cv;
using namespace std;

void w_sum(Mat img_in1, Mat img_in2)

{	
	Mat img1 = img_in1;
	Mat img2 = img_in2;

	/* 2개의 컬러 이미지 가중합 */

	Mat result1;

	addWeighted(img1, 0.7, img2, 0.9, 0.0, result1);	// result = 0.7 * img1 + 0.9 * img2 + 0.0

	imshow("Result1", result1);





	/* 다른 방식으로 2개의 컬러 이미지 가중합 */

	Mat result2;

	result2 = 0.7 * img1 + 0.9 * img2;

	imshow("Result2", result2);





	/* 초록 채널에만 2개의 이미지 가중합 */

	Mat img2_gray;

	Mat result3;

	cvtColor(img2, img2_gray, COLOR_BGR2GRAY); // 컬러 영상이던 img2를 그레이 영상으로 변환. 



	vector<Mat> planes; // 3개 영상의 벡터 생성: Mat 클래스의 객체를 저장하는 동적 배열

	split(img1, planes); // 3채널인 단일 영상을 3개의 1채널 영상으로 분리

	planes[1] += img2_gray; // 초록 채널에 더하기: Blue (planes[0]) ,  Red (planes[2]) 

	merge(planes, result3); // 3개의 1채널 영상을 3채널인 단일 영상으로 병합

	imshow("Result3", result3);


	waitKey(0);


}