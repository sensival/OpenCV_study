
// Main.cpp

#include<iostream>
#include<stdio.h>
#include"mystudy.h"


using namespace std; //std::���� ����
using namespace cv;	//cv::���� ����


int main(int arg, char** argu) { // int main()�� �����ϰ� ����� �μ��� �޴°�� �μ� ������ argument�� (int arg, char** argu)�� ���� �� ����. �Ѵ� ����
	Mat img = imread("cat.png"); // ������Ʈ ���: C:\Users\wogns\OneDrive\���� ȭ��\OpenCV_study\Project_OpenCV_1\Project_OpenCV_1 �� �־�� ��
	showImg(img);

	return 0;
}