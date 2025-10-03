#include<stdio.h>

int isUnique(int *arr, int n) {
    int unq=1;
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            if (arr[i] == arr[j] && i != j && unq == 1) {
                unq = 0;
            }
        }
    }
    return unq;
}

void main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0;i<n;i++) {
        scanf("%d", &arr[i]);
    }
    if (isUnique(arr,n)) {
        printf("1");
    } else {
        printf("0");
    }
}
