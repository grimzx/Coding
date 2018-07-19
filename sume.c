#include <stdio.h>

int sume(){

    int n, suma = 0, suma2 = 0;

    scanf("%d", &n);

    suma = (n * (n + 1))/2;
    suma2 = (n * (n + 1) * (2 * n + 1))/6;

    printf("%d", suma);
    printf("\n");
    printf("%d", suma2);

    return 0;
}