#include<stdio.h>

void main() {
    int a, b, c, x;
    scanf("%d%d%d", &a, &b, &c);
    printf("%d %d %d\n", a, b, c);
    scanf("%d", &x);
    while(x > 0) {
        a = b;
        b = c;
        c = x;
        printf("%d %d %d\n", a, b, c);
        scanf("%d", &x);
    }
}
