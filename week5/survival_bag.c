#include<stdio.h>

void main () {
    int x, y, z, bag, bread, egg, water;
    scanf("%d %d %d", &x, &y, &z);
    if (x < y && x < z) {
        bag = x / 3;
    } else if (y < x && y < z ) {
        bag = y / 4;
    } else if (z < x && z < y) {
        bag = z / 2;
    }

    water = x - (3*bag);
    bread = y - (4*bag);
    egg = z - (2*bag);

    printf("%d %d %d %d", bag, water, bread, egg);
}
