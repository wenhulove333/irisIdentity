#pragma once
#include "opencv2/opencv.hpp"

using namespace cv;

class COpenCVProxy
{
public:
	COpenCVProxy();
	~COpenCVProxy();

	static int mat2Binary(const Mat img, char* data);
};

