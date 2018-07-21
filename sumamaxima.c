#include <stdio.h>

int sumamaxima()
{
    int nr, i, j, numar;
    int sumaMax = 0, sumaTemp;

    scanf("%d", &nr);

    for (i = 2; i < nr; i++) {

        sumaTemp = 0;

        for (j = 2; j < i; j++) {
            if (i % j == 0) {
                sumaTemp += j;
            }
        }

        if(sumaMax < sumaTemp){
            sumaMax = sumaTemp;
            numar = i;
        }
    }

    printf("Numarul %d are suma maxima: %d", numar, sumaMax);

    return 0;
}