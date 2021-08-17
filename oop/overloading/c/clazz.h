#ifndef C_PROGRAMMING_CLAZZ_H
#define C_PROGRAMMING_CLAZZ_H


struct clazz;


struct clazz *clazz_new(int val);
void clazz_delete(struct clazz *this);
void clazz_set_value(struct clazz *this, int val);
int clazz_get_value(struct clazz *this);


#endif //C_PROGRAMMING_PARENT_H
