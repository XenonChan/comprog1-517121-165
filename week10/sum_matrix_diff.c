#include<stdio.h>

void main() {
    int n, sum=0;
    scanf("%d", &n);
    int matrix[n][n];
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for(int i=0;i<n;i++) {
        for(int j=0;j<i;j++) {
            int x;
            x = matrix[i][j] - matrix[j][i];
            if(x < 0) {
                sum += x *-1;
            } else {
                sum += x;
            }

        }
    }
    printf("%d", sum);
}
