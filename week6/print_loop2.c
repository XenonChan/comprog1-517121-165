#include<stdio.h>

void main() {
    int n;
    scanf("%d", &n);
    if (n <= 0) {
        printf("Invalid input");
    } else {
        for(int i=1;i<=n;i++){
            printf("%d\n", i);
        }
    }
}
