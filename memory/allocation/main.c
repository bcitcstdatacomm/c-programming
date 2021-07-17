#include <stdio.h>
#include <stdlib.h>


#define SIZE 10


int main(void)
{
    int *random_values;
    int *zero_values;

    random_values = malloc(1000 * sizeof(int));
    zero_values   = calloc(10, sizeof(int));

    // may or may not be zero
    for(size_t i = 0; i < SIZE; i++)
    {
        printf("%d\n", random_values[i]);
    }

    printf("----\n");

    // 100% guaranteed to be 0
    for(size_t i = 0; i < SIZE; i++)
    {
        printf("%d\n", zero_values[i]);
    }

    free(random_values);
    free(zero_values);

    return EXIT_SUCCESS;
}
