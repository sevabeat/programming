#ifndef LAB1_PROCEDURES_H
#define LAB1_PROCEDURES_H

#include <iostream>
#include <cmath>

struct ComplexNumber{
    float a;
    float b;
    ComplexNumber(float a, float b);
};

struct Circle{
    float x;
    float y;
    float r;
    Circle(float x, float y, float r);
};
struct Vector{
    float x;
    float y;
    Vector(float x, float y);
};

void swap(int* a, int* b);
void swap(int& a, int& b);

void WholePart(float* a);
void WholePart(float& a);

void multiply(ComplexNumber* num, float* scalar);
void multiply(ComplexNumber& num, float& scalar);

void MoveCircleByVector(Circle* circle, Vector* vector);
void MoveCircleByVector(Circle& circle, Vector& vector);
#endif //LAB1_PROCEDURES_H
