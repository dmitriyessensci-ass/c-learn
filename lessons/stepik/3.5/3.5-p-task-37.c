#include <stdio.h>

int main(){
    int n;
    float k, diff;
    scanf("%d%f", &n, &k);

     if (k >= 1.0) {
        diff = (k - 1.0) * n;
     } else {
        diff = (1.0 - k) * n;
     }

     int meetings = (int)(diff + 1e-9);
     printf("%d\n", meetings);

     return 0;

}