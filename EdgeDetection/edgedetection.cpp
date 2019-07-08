#include<opencv2/core.hpp>
#include<opencv2/videoio.hpp>
#include<opencv2/highgui.hpp>
#include<opencv2/opencv.hpp>
#include<bits/stdc++.h>
using namespace cv;
using namespace std;
int main(int, char**)
{
	Mat frame, gray, edge;
	VideoCapture cap;
	frame = imread("2.jpg", IMREAD_COLOR);
	namedWindow("Edge detection", WINDOW_AUTOSIZE);
	cvtColor(frame, gray, COLOR_BGR2GRAY);
	const int i = 50, j = 50;
	char msg[101];
	sprintf(msg, "i:%d, j:%d", i, j);
	Canny(gray, edge, i, j, 3);
	imshow(msg, edge);
	waitKey(0);
	return 0;
}