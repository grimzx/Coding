#include <stdio.h>

int digits(){

    float a,b;
    float suma, diferenta, media;

    scanf("%f %f", &a, &b);

    suma = a + b;
    diferenta = a - b;
    media = (a + b) / 2;
    printf("%.5f %.5f %.5f", suma, diferenta, media);

    return 0;

}