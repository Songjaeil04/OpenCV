#include<core.hpp>
#include<highgui.hpp>

#include<cstdio>
using namespace cv;
using namespace std;
int main() {
	Mat img = imread("lenna.jpg", IMREAD_COLOR);
	if (img.empty()) {
		printf("이미지를 찾을 수 없음");
		return 1;
	}

	imshow("Display", img);
	waitKey(0);
	return 0;
}