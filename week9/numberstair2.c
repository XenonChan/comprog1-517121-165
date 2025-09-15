#include<stdio.h>

int main() {
    int number[501], i=0;
    while(1){
        int tmp;
        scanf("%d", &tmp);
        if(tmp < 0 || tmp >= 10) {
            break;
        }
        number[i] = tmp;
        i++;
    }
    for(int j=1;j<=i;j++) {
        for(int k=0;k<i-j;k++) {
            printf(" ");
        }
        for(int l=1;l<=j;l++) {
            printf("%d", number[j-1]);
        }

        printf("\n");
    }

}
