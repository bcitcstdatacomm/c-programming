#ifndef C_PROGRAMMING_CHILD_H
#define C_PROGRAMMING_CHILD_H


#include "parent.h"
#include <iostream>


class child : public parent
{
private:
    int value;
public:
    child(std::string str, int val);
    virtual ~child();
    virtual void sayHello() const;
};


inline child::child(std::string str, int val) : parent(str), value(val)
{
}

inline child::~child()
{
}


inline void child::sayHello() const
{
    std::cout << str << " " << value << std::endl;
}


#endif //C_PROGRAMMING_PARENT_H
