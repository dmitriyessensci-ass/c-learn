#include <stdio.h>

int main()
{
    int hour, min, sec;

    scanf("%d %d", &hour, &min);

    min = hour * 60 + min;
    sec = min * 60;

    printf("hour - %d\nmin - %d\nsec - %d\n", hour, min, sec);
    return 0;
}