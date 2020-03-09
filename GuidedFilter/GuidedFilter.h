#ifndef __GUIDED_FILTER__H__
#define __GUIDED_FILTER__H__

#include <opencv2/opencv.hpp>

//�����˲�
void GuidedFilter(cv::Mat& srcImage, cv::Mat& guidedImage, cv::Mat& outputImage, int filterSize, double eps);

//���ٵ����˲�
void FastGuidedFilter(cv::Mat& srcImage, cv::Mat& guidedImage, cv::Mat& outputImage, int filterSize, double eps, int samplingRate);

#endif