#ifndef LAB3_TRIANGLE_H
#define LAB3_TRIANGLE_H

#include "Vector.h"
#include <iostream>

class Triangle {
private:
    Vector points[3];
    double area;
public:
    Triangle();
    Triangle(Vector p1, Vector p2, Vector p3);
    double calculateArea();
    double getArea();
    bool operator==(Triangle& t);
    bool operator!=(Triangle& t);
    bool operator>(Triangle& t);
    bool operator<(Triangle& t);
    Triangle& operator+=(Vector p);
    void print();
};


#endif //LAB3_TRIANGLE_H
