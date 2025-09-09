#include<stdio.h>

void exchange(int twenty, int fifthy, int hundred, int fifthundred, int thoundsand, int typ, int *amount, int *torn) {
    *amount = (twenty * 20)/typ + (fifthy * 50)/typ + (hundred * 100)/typ + (fifthundred * 500)/typ + (thoundsand * 1000)/typ;
    *torn = (twenty * 20)%typ + (fifthy * 50)%typ + (hundred * 100)%typ + (fifthundred * 500)%typ + (thoundsand * 1000)%typ;
}

void main() {
    int twenty, fifthy, hundred, fifthundred, thoundsand, typ, amount=0, torn=0;
    scanf("%d%d%d%d%d%d", &twenty, &fifthy, &hundred, &fifthundred, &thoundsand, &typ);
    if (typ == 1) {
        //amount = (twenty * 20)/20 + (fifthy * 50)/20 + (hundred * 100)/20 + (fifthundred * 500)/20 + (thoundsand * 1000)/20;
        //torn = (twenty * 20)%20 + (fifthy * 50)%20 + (hundred * 100)%20 + (fifthundred * 500)%20 + (thoundsand * 1000)%20;
        exchange(twenty, fifthy, hundred, fifthundred, thoundsand, 20, &amount, &torn);
    } else if (typ == 2) {
        //amount = (twenty * 20)/50 + (fifthy * 50)/50 + (hundred * 100)/50 + (fifthundred * 500)/50 + (thoundsand * 1000)/50;
        //torn = (twenty * 20)%50 + (fifthy * 50)%50 + (hundred * 100)%50 + (fifthundred * 500)%50 + (thoundsand * 1000)%50;
        exchange(twenty, fifthy, hundred, fifthundred, thoundsand, 50, &amount, &torn);
    } else if (typ == 3) {
        //amount = (twenty * 20)/100 + (fifthy * 50)/100 + (hundred * 100)/100 + (fifthundred * 500)/100 + (thoundsand * 1000)/100;
        //torn = (twenty * 20)%100 + (fifthy * 50)%100 + (hundred * 100)%100 + (fifthundred * 500)%100 + (thoundsand * 1000)%100;
        exchange(twenty, fifthy, hundred, fifthundred, thoundsand, 100, &amount, &torn);
    } else if (typ == 4) {
        //amount = (twenty * 20)/500 + (fifthy * 50)/500 + (hundred * 100)/500 + (fifthundred * 500)/500 + (thoundsand * 1000)/500;
        //torn = (twenty * 20)%500 + (fifthy * 50)%500 + (hundred * 100)%500 + (fifthundred * 500)%500 + (thoundsand * 1000)%500;
        exchange(twenty, fifthy, hundred, fifthundred, thoundsand, 500, &amount, &torn);
    } else if (typ == 5) {
        //amount = (twenty * 20)/1000 + (fifthy * 50)/1000 + (hundred * 100)/1000 + (fifthundred * 500)/1000 + (thoundsand * 1000)/1000;
        //torn = (twenty * 20)%1000 + (fifthy * 50)%1000 + (hundred * 100)%1000 + (fifthundred * 500)%1000 + (thoundsand * 1000)%1000;
        exchange(twenty, fifthy, hundred, fifthundred, thoundsand, 1000, &amount, &torn);
    }
    printf("%d", amount);
    if (torn != 0) printf("\n%d", torn);
}

// อ ย่ า ห า ท ำ
