#include <opencv2/core.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>


using namespace std;


int main()
{
    string image_path = "images/African-Animals-Images.jpg";

    cv::Mat image = cv::imread(image_path, cv::IMREAD_COLOR);
}
