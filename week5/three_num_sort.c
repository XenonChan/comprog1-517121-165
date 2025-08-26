#include<stdio.h>

void main() {
    int x, y, z, i;
    scanf("%d %d %d", &x, &y, &z);
    if (x > y) {
        i = x;
        x = y;
        y = i;
    }
    if (x > z) {
        i = x;
        x = z;
        z = i;
    }
    if (y > z) {
        i = y;
        y = z;
        z = i;
    }
    printf("%d %d %d", x, y, z);
}
