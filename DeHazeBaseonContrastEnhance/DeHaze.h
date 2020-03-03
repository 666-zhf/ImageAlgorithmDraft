#ifndef __DEHAZE_BASED_ON_CONTRAST_ENHANCE_H__
#define __DEHAZE_BASED_ON_CONTRAST_ENHANCE_H__

#include <opencv2/opencv.hpp>
#include <vector>

//�ӿ�:�����Ż��Աȶ��㷨���о�̬ͼ��ȥ��
void DeHazeBaseonContrastEnhance(cv::Mat& srcImg, cv::Mat& dstImg, cv::Size& transBlockSize, float fLambda, int guidedRadius, double eps, float fGamma = 1);

//����ͼ�������ֵ
void EstimateAirlight(cv::Mat& srcImage, cv::Size& minSize, std::vector<float>& vAtom);

//���ƴ�͸����
void EstimateTransmission(cv::Mat& srcImage, cv::Mat& transmission, cv::Size& transBlockSize, float costLambda, std::vector<float>& vAtom);

//ϸ��͸����
void RefiningTransmission(cv::Mat& transmission, cv::Mat& srcImage, cv::Mat& refinedTransmission, int r, double eps);

//�ؽ�ͼ��
void RestoreImage(cv::Mat& srcImage, cv::Mat& transmission, cv::Mat& dstImage, std::vector<float>& vAtom);

//�����˲�
void GuidedFileter(cv::Mat& guidedImage, cv::Mat& inputImage, cv::Mat& outPutImage, int r, double eps);

//gammaУ��
void GammaTransform(cv::Mat &image, cv::Mat &dist, double gamma);

#endif