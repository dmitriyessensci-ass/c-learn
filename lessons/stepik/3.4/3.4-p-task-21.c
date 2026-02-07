#include <stdio.h>

int main()
{
    float m, h, imt; // mass, height in meters, index of mass body
    int hsm;         // heights

    scanf("%f%d", &m, &hsm);
    h = hsm / 100 ;

    imt = m / (h * h);
    printf("%f\n", imt);

    return 0;

}