#include <stdio.h>

int main(){
    float ch, s, w ;
    scanf("%f%f%f", &s, &w, &ch);
    printf("%d\n", (int)((s / w) / ch));

    return 0;
}