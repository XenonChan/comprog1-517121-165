#include<stdio.h>

void main() {
    int a, b, c, x;
    scanf("%d%d%d", &a, &b, &c);
    if (b > a && b > c) {
        printf("%d\n", b);
    }
    scanf("%d", &x);
    while(x > 0) {
        a = b;
        b = c;
        c = x;
        if (b > a && b > c) {
            printf("%d\n", b);
        }
        scanf("%d", &x);
    }
}

