#include<stdio.h>

int countMax(int *arr, int n) {
    int max=-99999999, countmax=0;
    for(int i=0;i<n;i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    for(int i=0;i<n;i++) {
        if (max == arr[i]) {
            countmax++;
        }
    }
    return countmax;
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0;i<n;i++) {
        scanf("%d", &arr[i]);
    }
    printf("%d", countMax(arr, n));
}
