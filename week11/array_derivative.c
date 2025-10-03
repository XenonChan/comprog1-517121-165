#include<stdio.h>

void derivative(int *AInput, int *AOutput, const int n) {
    for(int i=1;i<n;i++) {
        AOutput[i] = AInput[i] - AInput[i-1];
    }
    AOutput[0] = 0;
}

void main() {
    int n;
    scanf("%d", &n);
    int AInput[n], AOutput[n];
    for(int i=0;i<n;i++) {
        scanf("%d", &AInput[i]);
    }
    derivative(AInput, AOutput, n);
    for(int i=0;i<n;i++) {
        printf("%d ", AOutput[i]);
    }
}
