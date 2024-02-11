#include <vector>
#include <map>
#include <list>
#include <opencv2/opencv.hpp>

class MatHolder {
    cv::Mat m1, m2;
    cv::Mat *pm1;
    std::vector<cv::Mat>v;
    std::map<int, cv::Mat>m;
    std::list<cv::Mat> l;
public:
    MatHolder()
        : m1 {cv::Mat::zeros(10, 10, CV_32F)}
        , m2 {cv::Mat::ones(7, 7, CV_32F)}
        , pm1 {& m1}
        , v {m1, m2}
        {
            m[1] = cv::Mat::zeros(3, 3, CV_8U);
            m[2] = cv::Mat::ones(4, 3, CV_8U);
            l.push_back(cv::Mat::eye(4, 4, CV_32F));
            l.push_back(cv::Mat::ones(4, 4, CV_32F));
        }

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
