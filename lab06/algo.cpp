#include "algo.h"

template<typename iterator, typename func>
bool noneOf(const iterator& begin, const iterator& end, const func pred){
    bool none = true;
    for(iterator it = begin; it != end; it++){
        if(pred(*it)){
            none = false;
            break;
        }
    }
    return none;
}

template<typename iterator, typename func>
bool isSorted(const iterator& begin, const iterator& end, const func criterion){
    iterator last;
    for(iterator it = begin; it != end; it++){
        if(it != begin && !criterion(*last, *it)){
            return false;
        }
        last = it;
    }
    return true;
}

template<typename iterator, typename T>
iterator findBackward(const iterator& begin, const iterator& end, T value){
    for(auto it = end - 1; it >= begin; it--){
        if(*it == value){
            return it;
        }
    }
    return end;
}