#include <opencv2/opencv.hpp>			// ��� ������ ������ ����� ���� ��ü!

using namespace cv;

int main(int argc, char** argv) {
	Mat img = imread("cat.png");
	Mat blurredImg;						//����þ� ó���� �� �̹����� ���� ����

	if (img.empty())
		return -1;

	namedWindow("img", WINDOW_AUTOSIZE);		// �Է� ����� ���� ������ �����
	namedWindow("blurredImg", WINDOW_AUTOSIZE);	// ��� ����� ���� ������ �����

	imshow("img", img);

	GaussianBlur(img, blurredImg, Size(5, 5), 3, 3);
	GaussianBlur(blurredImg, blurredImg, Size(5, 5), 3, 3);

	imshow("blurredImg", blurredImg);

	waitKey(0);


}