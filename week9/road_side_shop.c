#include<stdio.h>

int main() {
    int n, k, max=0;
    scanf("%d%d", &n,&k);
    int shop[n];
    for(int i=0;i<n;i++) {
        scanf("%d", &shop[i]);
    }
    for(int i=k;i<=n-k-1;i++) {
        int x=shop[i];
        for(int j=1;j<=k;j++) {
            x += shop[i-j];
            x += shop[i+j];
        }
        if(x > max) {
            max = x;
        }
    }
    printf("%d", max);
}
