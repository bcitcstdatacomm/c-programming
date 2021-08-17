#include <stdio.h>
#include <stdlib.h>


static int add(int a, int b);
static int subtract(int a, int b);
static void calculate(int a, int b, int (*perform)(int a, int b));


int main(void)
{
    calculate(10, 20, add);
    calculate(10, 20, subtract);

    return EXIT_SUCCESS;
}


static int add(int a, int b)
{
    return a + b;
}


static int subtract(int a, int b)
{
    return a - b;
}


static void calculate(int a, int b, int (*perform)(int a, int b))
{
    int result;

    result = perform(a, b);
    printf("%d\n", result);
}
