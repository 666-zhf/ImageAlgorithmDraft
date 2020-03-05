#ifndef __DEHAZE_BASED_ON_CONTRAST_ENHANCE_H__
#define __DEHAZE_BASED_ON_CONTRAST_ENHANCE_H__

#include <opencv2/opencv.hpp>
#include <vector>

//�ӿ�:�����Ż��Աȶ��㷨���о�̬ͼ��ȥ��
void DeHazeBaseonContrastEnhance(cv::Mat& srcImg, cv::Mat& dstImg, cv::Size& transBlockSize, float fLambda, int guidedRadius, double eps, float fGamma = 1);

#endif