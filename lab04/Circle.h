#ifndef LAB4_CIRCLE_H
#define LAB4_CIRCLE_H

#include "Interfaces.h"
#include <cmath>

class Circle : public IFigure{
private:
    Vector2D center;
    double radius;
    const std::string name = "Circle";
    double _mass;
public:
    Circle();
    Circle(int radius, Vector2D center, double mass);
    const std::string classname() override;
    double square() override;
    double perimeter() override;
    double mass() override;
    Vector2D position() override ;
};


#endif //LAB4_CIRCLE_H
