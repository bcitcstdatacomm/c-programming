#ifndef C_PROGRAMMING_PARENT_H
#define C_PROGRAMMING_PARENT_H


struct parent;


struct parent_vtable
{
    void (*say_hello)(struct parent *);
};


struct parent
{
    struct parent_vtable *vtable;
    char *str;
};


void parent_setup(void);
void parent_init(struct parent *this, const char *str);
void parent_destroy(struct parent *this);
void parent_say_hello(struct parent *this);


#endif //C_PROGRAMMING_PARENT_H
