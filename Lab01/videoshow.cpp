#include <opencv2/opencv.hpp>
#include <iostream>

using namespace cv;
using namespace std;

// In C++, you can define constants variable using #define
#define VIDEO_FILE "Lab01-robot-video.mp4"
#define ROTATE false

int main(int argc, char** argv)
{
    Mat matFrameCapture;
    Mat matFrameDisplay;
    int iKey = -1;

    // Open input video file
    VideoCapture videoCapture(VIDEO_FILE);
    if (!videoCapture.isOpened()) {
        cerr << "ERROR! Unable to open input video file " << VIDEO_FILE << endl;
        return -1;
    }

    // Capture loop
    while (iKey != int(' '))        // play video until user presses <space>
    {
        // Get the next frame
        videoCapture.read(matFrameCapture);
        if (matFrameCapture.empty())
        {
            // End of video file
            break;
        }

        // We can rotate the image easily if needed.
#if ROTATE
        rotate(matFrameCapture, matFrameDisplay, RotateFlags::ROTATE_180);   //rotate 180 degree and put the image to matFrameDisplay
#else
        matFrameDisplay = matFrameCapture;
#endif

        float ratio = 480.0 / matFrameDisplay.rows;
        resize(matFrameDisplay, matFrameDisplay, cv::Size(), ratio, ratio, INTER_LINEAR); // resize image to 480p for showing

        // Display
        imshow(VIDEO_FILE, matFrameDisplay); // Show the image in window named "robot.mp4"
        iKey = waitKey(30); // Wait 30 ms to give a realistic playback speed
    }
    return 0;
}
