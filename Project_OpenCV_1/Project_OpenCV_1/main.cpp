
// Main.cpp

#include<iostream>
#include<stdio.h>
#include"mystudy.h"


using namespace std; //std::생략 가능
using namespace cv;	//cv::생략 가능


int main(int arg, char** argu) { // int main()도 가능하고 명령행 인수를 받는경우 인수 개수와 argument를 (int arg, char** argu)로 받을 수 있음. 둘다 가능
	Mat img1 = imread("city.png"); // 프로젝트 경로: C:\Users\wogns\OneDrive\바탕 화면\OpenCV_study\Project_OpenCV_1\Project_OpenCV_1 에 있어야 함
	Mat img2 = imread("rainoverlay.png");
	w_sum(img1, img2);

	return 0;
}