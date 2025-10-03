#include<stdio.h>

double average(int *arr, const int n) {
    double sum=0;
    for(int i=0;i<n;i++) {
        sum+=arr[i];
    }
    return sum/n;
}

double variance(int *arr, const double avg, const int n) {
    double va=0;
    for(int i=0;i<n;i++) {
        va+=(arr[i]-avg)*(arr[i]-avg);
    }
    return va/(n-1);
}
int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0;i<n;i++) {
        scanf("%d", &arr[i]);
    }
    double avg = average(arr, n);
    double var = variance(arr, avg, n);
    printf("%.2lf %.2lf", avg, var);
}
