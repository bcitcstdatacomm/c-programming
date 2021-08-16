#include <stdio.h>
#include <stdlib.h>


struct data
{
    const char *str;
    int value;
};


static void display_addresses(const char *name, struct data *object);
static void display(struct data *object);
static void change(struct data *object, const char *str, int value);


int main(void)
{
    struct data a;
    struct data b;

    a.str   = "A";
    a.value = 10;
    b.str   = "B";
    b.value = 20;

    display_addresses("a", &a);
    display_addresses("b", &b);
    display(&a);
    display(&b);
    printf("---\n");

    a = b;
    display_addresses("a", &a);
    display_addresses("b", &b);
    display(&a);
    display(&b);
    printf("---\n");

    change(&b, "C", 30);
    display_addresses("a", &a);
    display_addresses("b", &b);
    display(&a);
    display(&b);
    printf("---\n");

    return EXIT_SUCCESS;
}


static void display_addresses(const char *name, struct data *object)
{
    printf("%s\n", name);
    printf("\tobject: %p\n", (void *)object);
    printf("\tstr:    %p\n", (void *)&object->str);
    printf("\tvalue:  %p\n", (void *)&object->value);
}


static void display(struct data *object)
{
    printf("%s: %d\n", object->str, object->value);
}

static void change(struct data *object, const char *str, int value)
{
    object->str   = str;
    object->value = value;
}
