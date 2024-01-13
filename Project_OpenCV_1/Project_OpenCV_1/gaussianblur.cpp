#include <opencv2/opencv.hpp>			// 헤더 파일을 가볍게 만들기 위해 교체!

using namespace cv;

int main(int argc, char** argv) {
	Mat img = imread("cat.png");
	Mat blurredImg;						//가우시안 처리가 된 이미지를 담을 변수

	if (img.empty())
		return -1;

	namedWindow("img", WINDOW_AUTOSIZE);		// 입력 결과를 넣을 윈도우 만들기
	namedWindow("blurredImg", WINDOW_AUTOSIZE);	// 출력 결과를 넣을 윈도우 만들기

	imshow("img", img);

	GaussianBlur(img, blurredImg, Size(5, 5), 3, 3);
	GaussianBlur(blurredImg, blurredImg, Size(5, 5), 3, 3);

	imshow("blurredImg", blurredImg);

	waitKey(0);


}