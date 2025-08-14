#include<stdio.h>

void main() {
    int x, y, m, n, big, sm, plate, wood;
    scanf("%d %d", &x, &y);
    scanf("%d %d", &m, &n);
    // m
    if (x<y) {
        big = x / 2;
    } else if (y < x) {
        big = y / 6;
    }

    plate = x - (2*big);
    wood = y - (6*big);

    printf("%d %d %d", big, plate, wood);

}
