#include <stdio.h>

int main()
{
    int h, m;

    scanf("%d %d", &h, &m);

    int minres = h * 60 + m;
    printf("%d\n", minres);

    int secres = minres * 60;
    printf("%d\n", secres);

    return 0;
}