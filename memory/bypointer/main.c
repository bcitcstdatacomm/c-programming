#include <stdio.h>
#include <stdlib.h>


static void display(int *value);


int main(void)
{
    int a;

    a = 5;
    printf("[%p] = %d\n", (void *)&a, a);
    display(&a);
    printf("[%p] = %d\n", (void *)&a, a);

    return EXIT_SUCCESS;
}

static void display(int *value)
{
    printf("[%p] = %p\n", (void *)&value, (void*)value);
    printf("[%p] = %d\n", (void *)value, *value);
    *value = 6;
}
