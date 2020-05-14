#include "Vector.h"
Vector::Vector(): x(0), y(0) {}
Vector::Vector(double x, double y) : x(x), y(y) {}

double Vector::getX() const{
    return this->x;
}
double Vector::getY() const{
    return this->y;
}
double Vector::operator|(const Vector& to){
    double d_x = this->x - to.x;
    double d_y = this->y - to.y;
    return sqrt(d_x * d_x + d_y * d_y);
}
Vector& Vector::operator+(const Vector& vector){
    this->x += vector.getX();
    this->y += vector.getY();
    return *this;
}