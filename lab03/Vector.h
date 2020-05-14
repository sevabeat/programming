#ifndef LAB3_VECTOR_H
#define LAB3_VECTOR_H
#include <cmath>

class Vector{
private:
    double x;
    double y;
public:
    Vector(double x, double y);
    Vector();
    double getX() const;
    double getY() const;
    double operator|(const Vector& to);
    Vector& operator+(const Vector& vector);

};
#endif //LAB3_VECTOR_H
