#include <stdlib.h>
#include <stdio.h>


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
    display("FIRST",  FIRST);
    display("SECOND", SECOND);
    display("FOURTH", FOURTH);
    display("FIFTH",  FIFTH);
    display("SIXTH",  SIXTH);
    display("TENTH",  TENTH);
    display("invalid",  11);

    return EXIT_SUCCESS;
}


static void display(const char *name, enum values value)
{
    printf("%s = %d\n", name, value);
}
