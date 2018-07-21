#include <stdio.h>

int palindrom(){

    int nr, pal = 0, i = 1, var;

    scanf("%d", &nr);

    var = nr;

    while(nr > 0){

        pal = pal * 10;
        pal = pal + (nr % 10);
        nr = nr / 10;
    }

    if(var == pal){

        printf("Este palindrom");

    }else{

        printf("Nu este palindrom");

    }

    return 0;
}
