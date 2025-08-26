#include<stdio.h>

void main(){
    int n, a=0, b=0, c=0;
    scanf("%d", &n);
    for(int i=0;i<n;i++) {
        int x;
        scanf("%d", &x);
        if (a<=b && a<=c) {
            a += x;
            printf("A");
        } else if (b<a && b<=c) {
            b += x;
            printf("B");
        } else if (c<b && c<a) {
            printf("C");
            c+= x;
        }
        printf("\n");
    }
}
