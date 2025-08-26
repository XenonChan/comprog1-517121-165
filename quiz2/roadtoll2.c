#include<stdio.h>

void main() {
    int n, sum=0;
    scanf("%d", &n);
    if (n <= 0) {
        printf("invalid %d", n);
    } else {
        for(int i=0;i<n;i++) {
            int x;
            scanf("%d", &x);
            sum += x;
        }
        printf("%d", sum);
    }
}
