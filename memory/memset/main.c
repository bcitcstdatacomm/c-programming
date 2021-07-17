#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#define SIZE 10


int main(void)
{
    int values[SIZE];

    for(size_t i = 0; i < SIZE; i++)
    {
        printf("%d\n", values[i]);
    }

    printf("----\n");

    memset(values, 0, SIZE * sizeof(int));

    for(size_t i = 0; i < SIZE; i++)
    {
        printf("%d\n", values[i]);
    }

    return EXIT_SUCCESS;
}
