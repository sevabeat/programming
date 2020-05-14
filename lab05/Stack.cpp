#include "Stack.h"
template<int N, class T>
Stack<N, T>::Stack(): _size(0){
    this->values = new T[N];
}

template<int N, class T>
void Stack<N, T>::push(T value){
    if(this->_size < N){
        this->values[this->_size] = value;
        this->_size++;
    }else throw StackOverflow();
}

template<int N, class T>
T& Stack<N, T>::top(){
    if(this->_size > 0){
        return this->values[this->_size - 1];
    }else throw StackEmpty();
}

template<int N, class T>
void Stack<N, T>::pop(){
    if(this->_size > 0){
        this->_size--;
        return;
    }else throw StackEmpty();
}


template<int N, class T>
int Stack<N, T>::size(){
    return this->_size;
}