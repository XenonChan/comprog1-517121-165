#include<stdio.h>

void main() {
    int k, n, force, day, sum=0;
    scanf("%d %d", &k, &n);
    force = k*100;
    for(int i=0;i<n;i++) {
        int x;
        scanf("%d", &x);
        sum += x;
        day = (sum+force-1)/force;
        printf("%d\n", day);
    }
}
