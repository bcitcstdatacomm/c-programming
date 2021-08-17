#ifndef C_PROGRAMMING_PARENT_H
#define C_PROGRAMMING_PARENT_H


#include <string>


class parent
{
public:
    std::string str;

public:
    virtual ~parent();
};


inline parent::~parent()
{
}


#endif //C_PROGRAMMING_PARENT_H
