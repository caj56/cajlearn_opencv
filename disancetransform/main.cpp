//
// Created by c1535 on 2020/9/30.
//
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
    imshow("input image",scr);


    waitKey(0);
}