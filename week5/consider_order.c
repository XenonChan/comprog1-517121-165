#include<stdio.h>

void main() {
    int x, y, m, n, mx, my, lmx, lmy, nx, ny;
    scanf("%d %d", &x, &y);
    scanf("%d %d", &m, &n);
    mx=x*2;
    my=m*6;
    nx=n*1;
    ny=n*4;

    if (lmx>=nx&&lmy>=ny) {
        lmx=x-mx;
        lmy=y-my;
        printf("Yes %d %d", lmx-ny, lmy-nx);
    } else if (lmx<nx||lmy<ny) {
        if (lmx-nx>0) {
            lmx=0;
            printf("No %d %d", lmx, (lmy-ny)*-1);
        } else if (lmx-nx<0&&lmy-ny<0) {
            printf("No %d %d", (lmx-nx)*-1,(lmy-ny)*-1);
        } else if (lmy>0){
            lmy=0;
            printf("No %d %d", (lmx-nx)*-1, lmy);
        } else if (lmy-ny<0) {
            printf("No %d", lmx, (lmy-ny)*-1);
        }
    } else {
        if (lmx-nx>0) {
            lmx = 0;
            printf("No %d %d", lmx,(lmy-ny)*-1);
        } else if (lmx-nx<0) {
            printf("No %d %d", (lmx-nx)*-1, (lmy-ny)*-1);
        } else if (lmy>0) {
            lmy = 0;
            printf("No %d %d", (lmx-nx)*-1, lmy);
        } else if (lmy-ny<0) {
            printf("No %d %d", (lmx-nx)*-1, (lmy-ny)*-1);
        }
    }

}
