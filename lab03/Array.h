#ifndef LAB3_ARRAY_H
#define LAB3_ARRAY_H

#include <iostream>

class Array {
private:
    int n;
    int* values;
public:
    Array();
    Array(int n);
    int size();
    void print();
    int& operator[](int index);
    bool operator>(Array& a);
    bool operator<(Array& a);
    bool operator!=(Array& a);
    bool operator==(Array& a);
    Array& operator+(Array& a);
};


#endif //LAB3_ARRAY_H
