#pragma once
#include <cstdio>

class Car {
protected:
    int speed;
    char name[40];

public:
    int gear;

    Car();
    Car(int s, const char* n, int g);
    ~Car();

    void changeGear(int g = 4);
    void speedUp();
    void display();
    void whereAmI();
};