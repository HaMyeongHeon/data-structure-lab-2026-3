#include "SportsCar.h"

int main()
{
    SportsCar s1(50, "Ferrari", 3);

    printf("초기 상태\n");
    s1.display();

    printf("\n터보 OFF 상태 가속\n");
    s1.speedUp();
    s1.display();

    printf("\n터보 ON 상태 가속\n");
    s1.setTurbo(true);
    s1.speedUp();
    s1.display();

    printf("\n객체 주소 확인\n");
    s1.whereAmI();

    return 0;
}