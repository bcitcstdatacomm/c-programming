#ifndef C_PROGRAMMING_PARENT_H
#define C_PROGRAMMING_PARENT_H


#include <string>


class clazz
{
private:
    int value;

public:
    clazz(int val);
    void set_value(int val);
    int get_value();
};


inline clazz::clazz(int val)
{
    this->value = val;
}

inline void clazz::set_value(int val)
{
    this->value = val;
}

inline int clazz::get_value()
{
    return value;
}

#endif //C_PROGRAMMING_PARENT_H
