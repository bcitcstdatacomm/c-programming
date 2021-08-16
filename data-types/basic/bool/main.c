#include <limits.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    printf("bool:\n");
    printf("\tsize:  %zu\n", sizeof(bool));
    printf("\tbits:  %zu\n", sizeof(bool) * CHAR_BIT);
    printf("\ttrue:  %d\n", true);
    printf("\tfalse: %d\n", false);

    return EXIT_SUCCESS;
}
