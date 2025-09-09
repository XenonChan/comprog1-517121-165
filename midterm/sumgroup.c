#include<stdio.h>

void main() {
    int x_min, sum_min, x_max, sum_max, count=0, x=1;
    while(x > 0) {
        int sum=0;
        count++;
        for(int i=0;i<3;i++) {
            scanf("%d", &x);
            if (x <= 0) {
                break;
            } else {
                 sum += x;
            }
        }
        if (x <= 0) {
            break;
        } else {
            if (sum > sum_max || count == 1) {
                sum_max = sum;
                x_max = count;
            }
            if (sum < sum_min || count == 1) {
                sum_min = sum;
                x_min = count;
            }
            printf("%d\n", sum);
        }
    }
    printf("%d %d\n%d %d", x_max, sum_max, x_min, sum_min);
}
