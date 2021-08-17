#ifndef C_PROGRAMMING_CHILD_H
#define C_PROGRAMMING_CHILD_H


#include "parent.h"


struct child
{
    struct parent super;
    int value;
};


void child_setup(void);
void child_init(struct child *this, const char *str, int val);
void child_destroy(struct child *this);


#endif // C_PROGRAMMING_CHILD_H
