#include<core.hpp>
#include<highgui.hpp>

#include<cstdio>
using namespace cv;
using namespace std;
int main() {
	Mat img = imread("lenna.jpg", IMREAD_COLOR);
	if (img.empty()) {
		printf("�̹����� ã�� �� ����");
		return 1;
	}

	imshow("Display", img);
	waitKey(0);
	return 0;
}