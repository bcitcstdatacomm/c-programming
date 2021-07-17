#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(void)
{
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wpadded"
    struct data
    {
        char c;
        int i;
    };
#pragma GCC diagnostic pop

    struct data a;
    struct data b;

    a.c = 'A';
    a.i = 1000;
    b.c = 'B';
    b.i = 2345;
    printf("%c\n%d\n", a.c, a.i);
    printf("------\n");
    printf("%c\n%d\n", b.c, b.i);
    printf("---------------\n");

    memcpy(&b, &a, sizeof(a));

    printf("%c\n%d\n", a.c, a.i);
    printf("------\n");
    printf("%c\n%d\n", b.c, b.i);

    return EXIT_SUCCESS;
}
