#include<stdio.h>

void main() {
    int n, amount;
    scanf("%d", &n);
    if (n <= 60) {
        amount = n * 3;
    } else if (n <= 80) {
        amount = (60 * 3) + ((n - 60) * 2);
    } else if (n <= 100) {
        amount = (60 * 3) + (20 * 2) + n - 80;
    } else {
        amount = 250;
    }
    printf("%d %d", n, amount);
}
