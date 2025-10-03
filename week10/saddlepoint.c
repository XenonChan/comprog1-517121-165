#include<stdio.h>

int main() {
    int r, c, found=0;
    scanf("%d%d",&r, &c);
    int map[r][c];
    for(int i=0;i<r;i++) {
        for(int j=0;j<c;j++) {
            scanf("%d", &map[i][j]);
        }
    }
}
