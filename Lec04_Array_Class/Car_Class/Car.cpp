#include "Car.h"
#include <cstring>

Car::Car() {
    speed = 0;
    gear = 0;
    strcpy_s(name, "NoName");
}

Car::~Car() {}

Car::Car(int s, const char* n, int g)
    : speed(s), gear(g)
{
    strcpy_s(name, n);
}

void Car::changeGear(int g) {
    gear = g;
}

void Car::speedUp() {
    speed += 5;
}

void Car::display() {
    printf("[%s] : 기어=%d단 속도=%dkmph\n",
        name, gear, speed);
}

void Car::whereAmI() {
    printf("객체 주소 = %p\n", this);
}