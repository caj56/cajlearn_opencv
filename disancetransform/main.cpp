//
// Created by c1535 on 2020/9/30.
//图像形态学操作--距离变换distanceTransform（输入必须为CV_8U）
//-1:自定义距离；1：街区距离；2：欧式距离；3：棋盘距离
#include <iostream>
#include <opencv2/opencv.hpp>
using namespace std;
using namespace cv;
int main(){
    Mat scr,gray,dst;
    scr = imread(R"(C:\Users\c1535\Desktop\Program\0.jpg)");
    if(scr.empty()){
        cout << "检查文件路径是否正确！" << endl;
        return -1;
    }
    cvtColor(scr,gray,COLOR_BGR2GRAY);//变换为灰度图像
    imshow("input image",gray);
    threshold(gray,dst,20,255,THRESH_BINARY);
    Mat dist;
    //第二个参数为CV_32S输出矩阵，1:为距离类型，3：为距离变换掩码大小
    distanceTransform(dst,dist,1,3,CV_8U);
    imshow("output",dist);
    waitKey(0);
}