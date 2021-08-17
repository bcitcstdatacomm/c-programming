#ifndef C_PROGRAMMING_CHILD_H
#define C_PROGRAMMING_CHILD_H


#include "parent.h"


class child : public parent
{
public:
    int value;
public:
    virtual ~child();
};


inline child::~child()
{
}


#endif //C_PROGRAMMING_PARENT_H
