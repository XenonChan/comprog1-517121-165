#include<stdio.h>

void insert(int *arr, int x, int pos, int n){
    for(int i=n;i>pos-1;i--) {
        arr[i] = arr[i-1];
    }
    arr[pos-1] = x;
}

void main() {
    int n, arr[1000];
    for(int i=0;i<1000;i++) {
        arr[i] = 0;
    }
    scanf("%d", &n);
    for(int i=0;i<n;i++) {
        scanf("%d", &arr[i]);
    }
    while(1) {
        int pos, x;
        scanf("%d", &x);
        if(x <= 0) break;
        scanf("%d", &pos);
        insert(arr, x, pos, n);
        n++;
        for(int i=0;i<n;i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }
}
