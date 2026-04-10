#include <iostream>
#include <cstdio>
#include "Polynomial.h"

using namespace std;

// 생성자
Polynomial::Polynomial() {
    degree = 0;
    for (int i = 0; i < MAX_DEGREE; i++)
        coef[i] = 0;
}

// 입력 함수
void Polynomial::read() {
    printf("다항식의 최고 차수를 입력하시오: ");
    scanf_s("%d", &degree);

    printf("각 항의 계수를 입력하시오 (총 %d개): ", degree + 1);
    for (int i = 0; i <= degree; i++) {
        scanf_s("%f", &coef[i]);
    }
}

// 출력 함수
void Polynomial::display(const char* str) {
    printf("%s", str);

    for (int i = 0; i < degree; i++) {
        printf("%.1fx^%d + ", coef[i], degree - i);
    }
    printf("%.1f\n", coef[degree]);
}

// 덧셈 함수
void Polynomial::add(Polynomial a, Polynomial b) {
    if (a.degree > b.degree) {
        *this = a;
        for (int i = 0; i <= b.degree; i++) {
            coef[i + (degree - b.degree)] += b.coef[i];
        }
    }
    else {
        *this = b;
        for (int i = 0; i <= a.degree; i++) {
            coef[i + (degree - a.degree)] += a.coef[i];
        }
    }
}

// 0인지 확인
bool Polynomial::isZero() {
    return degree == 0 && coef[0] == 0;
}

// 부호 반전
void Polynomial::negate() {
    for (int i = 0; i <= degree; i++) {
        coef[i] = -coef[i];
    }
}