#include <stdio.h>
#include <math.h>

int main()
{
    int a, b;
    double c;
    
    scanf("%d%d", &a, &b);

    c = sqrt((a * a) + (b * b));
    printf("%f\n", c);

    return 0;
}