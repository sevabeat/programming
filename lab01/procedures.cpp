#include "procedures.h"


ComplexNumber::ComplexNumber(float a, float b): a(a), b(b){}
Circle::Circle(float x, float y, float r): x(x), y(y), r(r){}
Vector::Vector(float x, float y): x(x), y(y){}

void swap(int* a, int* b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}
void swap(int& a, int& b){
    int tmp = a;
    a = b;
    b = tmp;
}
void WholePart(float* a){
    *a = (int)*a;
}
void WholePart(float& a){
    a = (int)a;
}
void multiply(ComplexNumber* num, float* scalar){
    num->a *= *scalar;
    num->b *= *scalar;
}
void multiply(ComplexNumber& num, float& scalar){
    num.a *= scalar;
    num.b *= scalar;
}
void MoveCircleByVector(Circle* circle, Vector* vector){
    circle->x += vector->x;
    circle->y += vector->y;
}
void MoveCircleByVector(Circle& circle, Vector& vector){
    circle.x += vector.x;
    circle.y += vector.y;
}