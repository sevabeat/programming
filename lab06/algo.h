#ifndef LAB6_ALGO_H
#define LAB6_ALGO_H
#include <iostream>
#include <iterator>

template<typename iterator, typename func>
bool noneOf(const iterator& begin, const iterator& end, const func pred);

template<typename iterator, typename func>
bool isSorted(const iterator& begin, const iterator& end, const func criterion);

template<typename iterator, typename T>
iterator findBackward(const iterator& begin, const iterator& end, T value);
#include "algo.cpp"
#endif //LAB6_ALGO_H
