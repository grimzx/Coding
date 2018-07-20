#include <stdio.h>

int par(){

    int a;

    scanf("%d", &a);

    if (a % 2 == 0){

        printf("Par\n");

    }else{

        printf("Impar\n");

    }
    if ((a & 1) == 0){

        printf("Par(binar)\n");

    }else{

        printf("Impar(binar)\n");

    }

    return 0;
}
