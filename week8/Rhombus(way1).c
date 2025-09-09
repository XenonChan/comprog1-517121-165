#include<stdio.h>

void main() {
    int n;
    scanf("%d", &n);
    for(int j=n;j>0;j-=2) {
        for(int k=0;k<j/2;k++) {
            printf(" ");
        }
        for(int l=0;l<=n-j;l++) {
            printf("*");
        }
        printf("\n");
    }
    for(int j=3;j<=n;j+=2) {
        for(int k=0;k<j/2;k++) {
            printf(" ");
        }
        for(int l=0;l<=n-j;l++) {
            printf("*");
        }
        printf("\n");
    }

}
