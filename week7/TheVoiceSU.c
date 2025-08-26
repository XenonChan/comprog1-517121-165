#include<stdio.h>

void main() {
    int n, k, k1=0, k2=0;
    scanf("%d %d", &n, &k);
    for(int i=1;i<=n;i++) {
        int g, s1, s2;
        scanf("%d %d %d", &g, &s1, &s2);

        if (s1 >= 9 && s2 >= 9) {
        if (g == 1) {
            if (k1 < k) {
                printf("%d 1", i);
                k1++;
            } else if (k2 < k) {
                printf("%d 2", i);
                k2++;
            }
        } else if (g == 2) {
            if(k2 < k) {
                printf("%d 2", i);
                k2++;
            } else if (k1 < k) {
                printf("%d 1", i);
                k1++;
            }
        }
    } else if (s1 >= 9) {
        if (k1 < k) {
            printf("%d 1", i);
            k1++;
        }
    } else if (s2 >= 9) {
        if (k2 < k) {
            printf("%d 2", i);
            k2++;
        }
    }
    printf("\n");
    }
}
