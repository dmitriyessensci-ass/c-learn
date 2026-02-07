#include <stdio.h>

int main()
{
    int k_rice, k_veg, cost;
    scanf("%d%d", &k_rice, &k_veg);
    cost = k_rice + (k_veg*2);
    printf("%d\n", cost);
}