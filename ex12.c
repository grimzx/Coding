#include <stdio.h>

int ex12()
{
    int nr, i, j;
    int prim = 1;

    scanf("%d", &nr);

    for (i = 1; i <= nr; i++) {
        for (j = 2; j < i; j++) {
            if (i % j == 0) {
                prim = 0;
                break;
            }
        }
        if (nr > 1 && prim) {
            printf("Numarul %d este numar prim\n", i);
        }else{
            printf("Numarul %d nu este prim\n", i);
        }

        prim = 1;

    }

    return 0;
}