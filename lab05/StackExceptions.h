#ifndef LAB5_STACKEXCEPTIONS_H
#define LAB5_STACKEXCEPTIONS_H

#include <string>

class StackException : public std::exception {

};

class StackEmpty : public StackException{
public:
     const char* what() const noexcept override;
};

class StackOverflow : public StackException{
public:
    const char* what() const noexcept override;
};


#endif //LAB5_STACKEXCEPTIONS_H
