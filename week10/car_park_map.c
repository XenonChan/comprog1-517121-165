#include<stdio.h>

void main() {
    int m, n, x;
    scanf("%d%d%d", &m,&n,&x);
    int car_park[m][n];
     for(int i=0;i<m;i++) {
        for(int j=0;j<n;j++) {
            car_park[i][j] = 0;
        }
    }
    for(int i=0;i<x;i++) {
        int r, c;
        scanf("%d%d", &r, &c);
        car_park[r-1][c-1] = 1;
    }
    for(int i=0;i<m;i++) {
        for(int j=0;j<n;j++) {
            if (car_park[i][j] == 1) {
                printf("x");
            } else {
                printf("_");
            }
        }
        printf("\n");
    }
}
