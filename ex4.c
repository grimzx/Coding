#include <stdio.h>
#include <math.h>

int ex4(){

    int nr, b, s, i, x, dec;

    while(nr >= 0){

        scanf("%d", &nr);

        b = 0;
        i = 1;

        for(int j = nr; j > 0; j = j/2) {
            b = b + (nr % 2) * i;
            i = i * 10;
            nr = nr / 2;
        }

        printf("%d\n", b);

        dec = 0;
        x = 0;

        for(int z = b; z > 0; z = z /10){

            dec = dec + (b%10)*pow(2,x);
            b = b / 10;
            x++;
        }

        printf("%d\n", dec);
    }

    return 0;
}
