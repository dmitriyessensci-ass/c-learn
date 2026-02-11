#include <stdio.h>

int main(){
    int g1, s1, k1, g2, s2, k2, k_sum, carry_s, s_sum, carry_g;
    scanf("%d%d%d\n%d%d%d", &g1, &s1, &k1, &g2, &s2, &k2);

    k_sum = k1 + k2;
    carry_s = k_sum / 29;
    s_sum = s1 + s2 + carry_s;
    carry_g = s_sum / 17;

    printf("%d %d %d\n", g1 + g2 + carry_g, s_sum - carry_g * 17, k_sum - carry_s * 29);
    return 0;
}