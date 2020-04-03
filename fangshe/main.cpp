#include<opencv2\opencv.hpp>
#include<iostream>

using namespace cv;
using namespace std;

int main() {
	Mat dst;
	Mat src=imread("D:\\1.png");
	const Point2f src_pt[] = {
		Point2f(200,200),
		Point2f(250,200),
		Point2f(200,100)
	};
	const Point2f dst_pt[]{
		Point2f(300,100),
		Point2f(300,50),
		Point2f(200,100)
	};
	const Mat affine_matrix = getAffineTransform(src_pt,dst_pt );
	warpAffine(src, dst, affine_matrix, src.size());
	imshow("src", src);
	imshow("dts", dst);
	waitKey(0);



}