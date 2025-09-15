#include<stdio.h>

int main() {
    int n, max;
    scanf("%d", &n);
     int number[n];
     for(int i=0;i<n;i++){
        scanf("%d", &number[i]);
        if (i==0 || number[i] > max) {
            max = number[i];
        }
     }
     for(int i=0;i<max;i++) {
        for(int j=0;j<n;j++) {
            if (max - number[j] <= i) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
     }
}
