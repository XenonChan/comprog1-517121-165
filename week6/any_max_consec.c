#include<stdio.h>

void main() {
    int x, count=1, maxcount=0, prev, nummax = 0;
    scanf("%d", &x);
    prev = x;
    while(x != 0) {
        scanf("%d", &x);
        if (x == prev) {
            count++;
        } else {
            if (maxcount < count) {
                maxcount = count;
                nummax = prev;
            }
            count = 1;
        }
        prev = x;
    }
    printf("%d\n%d", maxcount, nummax);
}
