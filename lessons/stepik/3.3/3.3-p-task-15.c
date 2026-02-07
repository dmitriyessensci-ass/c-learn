#include <stdio.h>

int main()
{
    int x, y;

    scanf("%d%d", &x, &y);
    printf("%d\n%d\n", (x*60)+y, ((x*60)*60)+(y*60));

    return 0;
}