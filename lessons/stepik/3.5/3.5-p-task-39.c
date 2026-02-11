#include <stdio.h>
int main(){
    int n;
    float k;
    scanf("%d%f", &n, &k);
    printf("%d\n", (int)(n * (1.0 - k)));
    return 0;
}