#pragma once
#include <iostream>
using namespace std;

#define HEIGHT 8
#define WIDTH 8

class Image {
private:
    int image[HEIGHT][WIDTH];

public:
    // 생성자 (예제 이미지 초기화)
    Image();

    // 최대 밝기 찾는 함수
    int getMaxValue();
};