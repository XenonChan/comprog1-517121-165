#include<stdio.h>

void main() {
    int x, y;
    scanf("%d %d", &x, &y);
    if (x > y) {
        printf("Invalid input");
    } else {
        for(int i=x;i<=y;i++){
        printf("%d ", i);
    }
    }
}
