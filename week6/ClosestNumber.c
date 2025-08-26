#include<stdio.h>
#include<math.h>

void main() {
    int x, nearest, forward = 500000000;
    scanf("%d", &x);
    for(int i=0;i<8;i++) {
        int y;
        scanf("%d", &y);
        if(abs(x-y)<forward) {
            forward = abs(x-y);
            nearest = y;
        }
    }
    printf("%d", nearest);
}
