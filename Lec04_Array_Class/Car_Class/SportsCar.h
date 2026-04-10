#pragma once
#include "Car.h"

class SportsCar : public Car
{
public:
    bool bTurbo;

    SportsCar();
    SportsCar(int s, const char* n, int g);

    void setTurbo(bool bTur);
    void speedUp();
};