#include<stdio.h>

void main() {
    int r,c, count;
    scanf("%d %d", &r, &c);
    for(int i=0;i<r;i++) {
        for(int j=0;j<c;j++) {
            count++;
            printf("%d ", count);
        }
        printf("\n");
    }
}
