#include <stdio.h>
#include <time.h>

int timp(){

    printf("3\n");
    wait(1);
    printf("2\n");
    wait(1);
    printf("1\n");
    wait(1);
    printf("START");

    return 0;
}

void wait(int seconds){
    clock_t endwait;
    endwait = clock () + seconds * CLOCKS_PER_SEC ;
    while (clock() < endwait) {}
}