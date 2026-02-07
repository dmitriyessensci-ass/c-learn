#include <stdio.h>

int main()
{
    int a, b;

    scanf("%d%d", &a, &b);
    printf("%d\n%d\n", a*60, ((a*60)+b)*60);

    return 0;
}