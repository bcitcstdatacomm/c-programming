#include <stdio.h>
#include <stdlib.h>


union data
{
    const char *str;
    int value;
};


static void display_address(union data *object);
static void display_str(union data *object);
static void display_int(union data *object);


int main(void)
{
    union data value;

    value.str = "Hello, World!";
    display_address(&value);
    display_str(&value);
    display_int(&value); // will be garbage
    printf("---\n");
    value.value = 0;
    display_address(&value);
//    display_str(&value); // will likely crash with a memory issue
    display_int(&value);

    return EXIT_SUCCESS;
}


static void display_address(union data *object)
{
    printf("\tobject: %p\n", (void *)object);
    printf("\tstr:    %p\n", (void *)&object->str);
    printf("\tvalue:  %p\n", (void *)&object->value);
}

static void display_str(union data *object)
{
    printf("Str: %s\n", object->str);
}

static void display_int(union data *object)
{
    printf("Int: %x\n", object->value);
}
