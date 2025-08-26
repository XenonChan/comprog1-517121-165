#include<stdio.h>

void main() {
    int x;
    scanf("%d", &x);
    while(x > 0) {
        for(int i=0;i<x;i++) {
            printf("*");
        }
        printf("\n");
        scanf("%d", &x);
    }
}
