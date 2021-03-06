#include "DeHaze.h"
#pragma comment(lib, "opencv_core2410d.lib")
#pragma comment(lib, "opencv_imgproc2410d.lib")
#pragma comment(lib, "opencv_features2d2410d.lib")
#pragma comment(lib, "opencv_highgui2410d.lib")
int main()
{
	cv::namedWindow("srcImage", cv::WINDOW_AUTOSIZE);
	cv::namedWindow("dstImage", cv::WINDOW_AUTOSIZE);
	cv::Mat dstImage;
	try
	{
		std::string fileName = "test_DeHaze.jpg";
		cv::Mat imInput = cv::imread(fileName, 1);
		if (imInput.empty() || imInput.data == nullptr)
		{
			throw "File test.jpg not exist.";
		}
		cv::imshow("srcImage", imInput);
		cv::waitKey(10);
		double exec_time = (double)cv::getTickCount();
		DeHazeBaseonContrastEnhance(imInput, dstImage, cv::Size(30, 30), 5.0, imInput.rows > imInput.cols ? (int)imInput.rows / 11 : (int)imInput.cols / 11, 20, 0.85);
		exec_time = ((double)cv::getTickCount() - exec_time)*1000. / cv::getTickFrequency();
		
		std::cout << exec_time/1000.0 << std::endl;
	}
	catch (cv::Exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	cv::imshow("dstImage", dstImage);
	cv::waitKey(0);

	return 0;
}