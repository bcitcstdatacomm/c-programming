#include <stdio.h>
#include <stdlib.h>


static void display_as_array(const int array[], size_t size);
static void display_as_pointer(const int *array, size_t size);
static void display_as_both(const int *array, size_t size);
static void display_as_pointer_offset_explicit(const int *array, size_t size);
static void display_as_pointer_offset(const int *array, size_t size);
static void change_array(int *array, size_t position, int value);
static void change_pointer_explicit(int *array, size_t position, int value);
static void change_pointer(int *array, size_t position, int value);


int main(void)
{
    int array[] =
            {
                10, 20, 30, 40, 50,
            };
    size_t array_size;

    array_size = sizeof(array) / sizeof(array[0]);

    display_as_array(array, array_size);
    printf("---\n");
    display_as_pointer(array, array_size);
    printf("---\n");
    display_as_both(array, array_size);
    printf("---\n");
    display_as_pointer_offset_explicit(array, array_size);
    printf("---\n");
    display_as_pointer_offset(array, array_size);
    printf("---\n");

    change_array(array, 1, 5);
    change_pointer_explicit(array, 2, 6);
    change_pointer(array, 4, 7);
    display_as_array(array, array_size);

    return EXIT_SUCCESS;
}


static void display_as_array(const int array[], size_t size)
{
    for(size_t i = 0; i < size; i++)
    {
        printf("%d, ", array[i]);
    }

    printf("\n");
}


static void display_as_pointer(const int *array, size_t size)
{
    for(size_t i = 0; i < size; i++, array++)
    {
        printf("%d, ", *array);
    }

    printf("\n");
}


static void display_as_pointer_offset_explicit(const int *array, size_t size)
{
    for(size_t i = 0; i < size; i++)
    {
        printf("%d, ", *(&array[0] + i));
    }

    printf("\n");
}


static void display_as_pointer_offset(const int *array, size_t size)
{
    for(size_t i = 0; i < size; i++)
    {
        printf("%d, ", *(array + i));
    }

    printf("\n");
}


static void display_as_both(const int *array, size_t size)
{
    for(size_t i = 0; i < size; i++)
    {
        printf("%d, ", array[i]);
    }

    printf("\n");
}

static void change_array(int *array, size_t position, int value)
{
    array[position] = value;
}

static void change_pointer_explicit(int *array, size_t position, int value)
{
    *(&array[0] + position) = value;
}

static void change_pointer(int *array, size_t position, int value)
{
    *(array + position) = value;
}
