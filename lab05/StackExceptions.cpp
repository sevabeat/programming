//
// Created by seva on 18/04/2020.
//

#include "StackExceptions.h"

const char* StackEmpty::what() const noexcept{
    return "Stack is empty";
}
const char* StackOverflow::what() const noexcept{
    return "Stack overflow";
}