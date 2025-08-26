#include<stdio.h>

void main() {
    int n, x, count_n=0, tmp=0, temp=0;
    scanf("%d", &n);
    scanf("%d", &x);

    while(x != 0) {
        if(x == n) {
            count_n++;
            tmp++;
        } else {
            if(tmp > temp) {
                temp = tmp;
            }
            tmp = 0;
        }
        scanf("%d", &x);
    }
    printf("%d\n%d", temp, count_n);
}
