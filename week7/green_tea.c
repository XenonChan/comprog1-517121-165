#include<stdio.h>

void main() {
    for(int i=0;i<7;i++) {
        int x, y, sugar, water, water_l, greentea;
        scanf("%d %d", &x, &y);
        water = x/250;
        sugar = y/15;
        if (water < sugar) {
            greentea = water;
        } else {
            greentea = sugar;
        }
        water_l = x - (250*greentea);

        printf("%d ", greentea);

        if(water_l > 0) {
            printf("water");
        }
        printf("\n");
    }
}
