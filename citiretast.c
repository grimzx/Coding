#include <stdio.h>

int citiretast(){

    int n, k = 0;
    int prim;

    while(n > 0){

        prim = 1;
        scanf("%d", &n);

        for(int i = 2; i < n; i++){

            if(n % i == 0){
                printf("%d ", i);
                prim = 0;
            }

        }
        if(n > 1 & prim){

            printf("PRIM\n");
            k++;
        }
        printf("\n");
    }

    printf("S-au gasit %d numere prime", k);

    return 0;
}
