#ifndef C_PROGRAMMING_PARENT_H
#define C_PROGRAMMING_PARENT_H


#include <string>


class parent
{
protected:
    std::string str;
    parent(std::string str);

public:
    virtual ~parent();
    virtual void sayHello() const = 0;
};


inline parent::parent(std::string str) : str(str)
{
}


inline parent::~parent()
{
}


#endif //C_PROGRAMMING_PARENT_H
