#include <iostream>
#include <opencv/core.hpp>
using namespace std;

int main(void)
{
  double adData[] = { 3, 2, 4, 8, 4, 2, 1, 3, 2 };
  cv::Mat matA( 3, 3, CV_64F, adData );
  cout << "A:" << endl << matA << endl;
  cv::SVD svdA( matA, cv::SVD::FULL_UV );
  cout << "U:" << endl << svdA.u << endl;
  cout << "W:" << endl << svdA.w << endl;
  cout << "Vt:" << endl << svdA.vt << endl;
  // Check that A = U * W * Vt
  cv:: Mat matW =cv:: Mat::zeros(3,3, CV_64F);

  matW.at<double>(0,0) = svdA.w.at<double>(0,0);
  matW.at<double>(1,1) = svdA.w.at<double>(1,0);
  matW.at<double>(2,2) = svdA.w.at<double>(2,0);

  cout << "W converted to a matrix" << endl << matW << endl;

  cv:: Mat matAhat = svdA.u * svdA.W * svdA.vt;

  cout << "Ahat:" << endl << matAhat << endl;
  return 0;
}
