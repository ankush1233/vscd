#include<iostream>
#include <opencv2/opencv.hpp>
using namespace std;
int main()
{
    // Load the image from file
    cv::Mat image = cv::imread("image.jpg");

    // Check if the image was loaded successfully
    if(image.empty())
    {
        std::cout << "Failed to load image" << std::endl;
        return -1;
    }

    // Create a window to display the image
    cv::namedWindow("Image");

    // Display the image in the window
    cv::imshow("Image", image);

    // Wait for a key press to close the window
    cv::waitKey(0);*/
 
    return 0;
}