#include<stdio.h>

int main() {
    int n, count=0;
    scanf("%d", &n);
    int mountain[n][n], mountain_top[n*n], mountain_x[n*n], mountain_y[n*n];
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            scanf("%d", &mountain[i][j]);
        }
    }
    for(int i=1;i<n-1;i++) {
        for(int j=1;j<n-1;j++) {
            if (mountain[i][j] > mountain[i-1][j-1] && mountain[i][j] > mountain[i-1][j] && mountain[i][j] > mountain[i-1][j+1] && mountain[i][j] > mountain[i][j-1] && mountain[i][j] > mountain[i][j+1] && mountain[i][j] > mountain[i+1][j-1] && mountain[i][j] > mountain[i+1][j] && mountain[i][j] > mountain[i+1][j+1]) {
                mountain_top[count] = mountain[i][j];
                mountain_x[count] = i;
                mountain_y[count] = j;
                count += 1;
            }
        }
    }
    printf("%d\n", count);
    for(int i=0;i<count;i++) {
        printf("%d %d %d\n", mountain_top[i], mountain_x[i], mountain_y[i]);
    }
}
