#include <stdio.h>

char dectohex() {

    char vector[250];
    int i=0, numar, rest;

    scanf("%d", &numar);

    while(numar != 0){

        rest = numar % 16;

        if (rest < 10){

            vector[i] = '0' + rest;

        }else{

            vector[i] = 'A' + (rest - 10);

        }

        i++;

        numar = numar / 16;
    }

    for(int j = i-1; j >= 0; j--){

        printf("%c", vector[j]);

    }


    return 0;
}