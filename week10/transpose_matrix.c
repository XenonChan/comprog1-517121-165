#include<stdio.h>

void main() {
    int r, c;
    scanf("%d%d", &r, &c);
    int matrix[r][c];
    for(int i=0;i<r;i++) {
        for(int j=0;j<c;j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    for(int i=0;i<c;i++) {
        for(int j=0;j<r;j++) {
            printf("%d ", matrix[j][i]);
        }
        printf("\n");
    }
}
