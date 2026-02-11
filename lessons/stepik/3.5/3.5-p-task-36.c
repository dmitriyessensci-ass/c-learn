#include <stdio.h>
int main(){ int day, mon, res; scanf("%d%d", &day, &mon); res = ((day - mon)/7)+1; printf("%d\n", res); return 0; }