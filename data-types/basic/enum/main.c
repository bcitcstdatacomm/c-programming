#include <limits.h>
#include <stdio.h>
#include <stdlib.h>


enum values
{
    FIRST = 1,
    SECOND,
    FOURTH = 4,
    FIFTH,
    SIXTH,
    TENTH = 10
};


static void display(const char *name, enum values value);


int main(void)
{
    printf("enum:\n");
    printf("\tsizeof: %zu\n", sizeof(enum values));
    printf("\tbits:   %zu\n", sizeof(enum values) * CHAR_BIT);

    display("FIRST ",    FIRST);
    display("SECOND",   SECOND);
    display("FOURTH",   FOURTH);
    display("FIFTH ",    FIFTH);
    display("SIXTH ",    SIXTH);
    display("TENTH ",    TENTH);

    return EXIT_SUCCESS;
}


static void display(const char *name, enum values value)
{
    printf("%s = %d\n", name, value);
}
