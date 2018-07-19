#include <stdio.h>
#include <math.h>

int minmax(){

    int a, b, t;

    scanf("%d %d", &a, &b);

    t = (a + b + fabs(a-b)) / 2;

    printf("%d", t);
    printf("\n");


    return 0;

}
