#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

using namespace cv;
using namespace std;

int main()
{
    double adDataX[] = { 2, 6, 1, 16, 4, 3, 2, 8, 2, 3, 0.5, 4};
    cv::Mat matX( 3, 4, CV_64F, adDataX );
    cout << "X:" << matX << endl;
    double adDataL[] = { 8, -4, 0 };
    cv::Mat matL( 3, 1, CV_64F, adDataL );
    cout << "Line:" << matL << endl;
    cv::Mat matDotProds = matX.t() * matL;
    cout << "matX.t():" << matX.t() << endl;
    cout << "matDotProds:" << matDotProds << endl;
 
    for (int i = 0; i < 4; i++) {
	if (fabs(matDotProds.at<double>(i, 0)) < 1e-6) {
	    cout << "Point " << i << " is on the line." << endl;
	} else {
	    cout << "Point " << i << " is not on the line." << endl;
	}
    }
    return 0;
}
