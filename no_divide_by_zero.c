#include<stdio.h>

void main() {
    int z;
    double x, y;
    scanf("%lf %lf %d", &x, &y, &z);
    if (z == 0) {
        printf("cannot divide by zero");
    } else {

        printf("%.6f", (x + y) / z);
    }
}
