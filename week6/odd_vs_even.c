#include<stdio.h>

void main() {
    int odd=0, even=0;
    for(int i=1;i<=8;i++) {
        int x;
        scanf("%d", &x);
        if (x % 2 == 0) {
            even += x;
        } else {
            odd += x;
        }
    }
    if (odd > even) {
        printf("odd");
    } else if (even > odd) {
        printf("even");
    } else if (odd == even) {
        printf("equal");
    }
    printf("\n%d\n%d", even, odd);
}
