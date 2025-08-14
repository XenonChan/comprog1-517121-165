#include<stdio.h>

void main() {
    int x, sum=0;
    scanf("%d", &x);
    while(x != 0) {
        sum++;
        scanf("%d", &x);
    }
    printf("%d", sum);
}
