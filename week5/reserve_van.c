#include<stdio.h>

void main() {
    int x, y, z;
    scanf("%d %d %d", &x, &y, &z);
    if(x <= y && x <= z) {
        printf("A");
    } else if ( y <= z ) {
        printf("B");
    } else if (z < x || z < y) {
        printf("C");
    }
}
