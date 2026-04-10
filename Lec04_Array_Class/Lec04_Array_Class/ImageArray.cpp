#include "Image.h"

// 생성자
Image::Image() {
    int temp[HEIGHT][WIDTH] = {
        { 10, 30, 55, 80, 120, 160, 200, 230 },
        { 20, 45, 70, 100, 140, 180, 220, 210 },
        { 35, 60, 90, 130, 170, 210, 240, 190 },
        { 50, 80, 115, 150, 190, 230, 255, 170 },
        { 40, 65, 100, 140, 175, 215, 235, 150 },
        { 25, 50, 80, 115, 155, 195, 210, 130 },
        { 15, 35, 60, 90, 130, 165, 185, 110 },
        { 5, 20, 40, 70, 105, 140, 160, 90 }
    };

    // 배열 복사
    for (int i = 0; i < HEIGHT; i++) {
        for (int j = 0; j < WIDTH; j++) {
            image[i][j] = temp[i][j];
        }
    }
}

// 최대 밝기 찾기
int Image::getMaxValue() {
    int max = image[0][0];

    for (int i = 0; i < HEIGHT; i++) {
        for (int j = 0; j < WIDTH; j++) {
            if (image[i][j] > max) {
                max = image[i][j];
            }
        }
    }

    return max;
}