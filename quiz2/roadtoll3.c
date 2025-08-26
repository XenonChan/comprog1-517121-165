#include<stdio.h>

void main() {
    int n, sum = 0;
    scanf("%d", &n);
    if (n <= 0) {
        printf("invalid %d", n);
    } else {
        for (int i=0;i<n;i++) {
            int x;
            scanf("%d", &x);
            if (x <= 0) {
                printf("error ");
                break;
            } else {
                if (x <= 60) {
                    sum += x * 3;
                } else if (x <= 80) {
                    sum += (60 * 3) + ((x - 60) * 2);
                } else if (x <= 100) {
                    sum += (60 * 3) + (20 * 2) + x - 80;
                } else {
                    sum += 250;
                }
            }
        }
        printf("%d", sum);
    }
}
