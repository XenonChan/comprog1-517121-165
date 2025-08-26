#include<stdio.h>

void main() {
    int x, n, sum = 0;
    scanf("%d", &n);
    scanf("%d", &x);
    while(x != 0) {
        if (x == n) {
            sum++;
        }
        scanf("%d", &x);
    }
    if (sum == 0) {
        printf("None");
    } else {
        printf("%d", sum);
    }
}
