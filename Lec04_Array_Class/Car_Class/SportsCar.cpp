#include "SportsCar.h"

SportsCar::SportsCar() : Car() {
    bTurbo = false;
}

SportsCar::SportsCar(int s, const char* n, int g)
    : Car(s, n, g)
{
    bTurbo = false;
}

void SportsCar::setTurbo(bool bTur) {
    bTurbo = bTur;
}

void SportsCar::speedUp() {
    if (bTurbo)
        speed += 20;
    else
        Car::speedUp();
}