#include <stdio.h>
#include <math.h>

int ex4vect(){

    int v[250], i, nr, dec, z;

    while(nr >=0) {

        scanf("%d", &nr);

        i = 0;
        dec = 0;
        z = 0;

        for(int j = nr; j > 0; j = j/2) {
            v[i] = nr % 2;
            nr = nr / 2;
            i++;
        }

        for(int x = i-1; x >= 0; x--){
            printf("%d", v[x]);
            dec = dec + v[x]*pow(2,x);
            z++;
        }
        printf("\n");
        printf("%d", dec);

        printf("\n");
    }

    return 0;
}
