#ifndef LAB5_STACK_H
#define LAB5_STACK_H

#include "StackExceptions.h"

template<int N, class T>
class Stack{
private:
    T* values;
    int _size;
public:
    Stack();
    void push(T value);
    T& top();
    void pop();
    int size();
};
#include "Stack.cpp"

#endif //LAB5_STACK_H
