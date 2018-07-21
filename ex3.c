#include <stdio.h>
#include <math.h>

int ex3(){

    int a, b, c, u, v;
    float delta, x1, x2;
    float min, max;

    scanf("%d %d %d %d %d", &a, &b, &c, &u, &v);

    delta = pow(b,2) - (4 * a * c);

    delta = fabsf(delta);

    if(a > 0){

        min = -delta / (4*a);
        max = -b / (2 * a);

        printf("Minim: %f\n", min);
        printf("Maxim: %f\n", max);
    }

    x1 = (-b - sqrt(delta)) / (2 * a);
    x2 = (-b + sqrt(delta)) / (2 * a);

    if(x1 >= u && x2 <= v){
        printf("%f %f", x1, x2);
    }

    return 0;
}