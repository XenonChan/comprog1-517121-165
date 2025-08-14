#include<stdio.h>

void main() {
    int min = 9999999, max = -9999999;
    for(int i=1;i<=8;i++) {
        int x;
        scanf("%d", &x);
        if (x <= 0) {
            continue;
        }
        if (x > max) {
            max = x;
        }
        if (x < min) {
            min = x;
        }

    }
    printf("%d\n", max);
    printf("%d", min);
}
