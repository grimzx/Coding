#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int random(){

    int a, b, c, d, e;

    srand((unsigned)time(NULL));

    //Am observat ca daca folosesc NULL imi genereaza 5 numere random
    //Daca folosesc 0x1234 sau orice alta valoare imi da un exit code ciudat
    //Process finished with exit code -1073741819 (0xC0000005)

    a = rand();
    b = rand();
    c = rand();
    d = rand();
    e = rand();

    printf("%d\n", a);
    printf("%d\n", b);
    printf("%d\n", c);
    printf("%d\n", d);
    printf("%d\n", e);

    return 0;
}
