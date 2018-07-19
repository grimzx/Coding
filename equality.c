#include <stdio.h>
#include <math.h>

int equality(){

    double a, b;
    int x, y;

    scanf("%lf %lf", &a, &b);

    x = a * pow(10,4);
    y = b * pow(10,4);

    if (x == y){

        printf("EQ");

    }else{

        printf("NOT EQ");

    }


    return 0;
}
