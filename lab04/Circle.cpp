#include "Circle.h"
Circle::Circle() : radius(0), _mass(0){

}
Circle::Circle(int radius, Vector2D center, double mass) : radius(radius), center(center), _mass(mass){

}


const std::string Circle::classname(){
    return this->name;
}
double Circle::square() {
    return M_PI * this->radius * this->radius;
}

double Circle::perimeter() {
    return 2 * M_PI * this->radius;
}

double Circle::mass() {
    return this->_mass;
}

Vector2D Circle::position() {
    return this->center;
}
