#include <stdio.h>

int Ex11(void)
{
    int nr, i;
    int prim = 1;

    scanf("%d", &nr);

    for (i = 2; i < nr; i++) {
        if (nr % i == 0) {
            //printf("%d ", i);
           prim = 0;
        }
    }

    if (nr > 1 && prim) {
        printf("Numarul %d este numar prim", nr);
    }else{

        printf("Numarul %d nu este numar prim", nr);

    }

    printf("\n");

    return 0;
}