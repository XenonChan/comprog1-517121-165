#include<stdio.h>

int main() {
    int n, x, found=0;
    scanf("%d", &n);
    int number[n];
    for(int i=0;i<n;i++) {
        scanf("%d", &number[i]);
    }
    scanf("%d", &x);
    for(int i=0;i<n;i++) {
        if (x == number[i]) {
            printf("%d ", i+1);
            found=1;
        }
    }
    if(!found){
        printf("0");
    }
}
