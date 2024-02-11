#include <vector>
#include <opencv2/opencv.hpp>

class MatHolder {
    std::vector<cv::Mat>v;
public:
    MatHolder():
        v{cv::Mat::zeros(10, 10, CV_32F), cv::Mat::ones(15, 15, CV_32F)}
        {}

    void update() {
        v[0].at<float>(5, 5) = 1;
    }
};

int main(void)
{
    MatHolder mh;
    mh.update();
    return 0;
}
