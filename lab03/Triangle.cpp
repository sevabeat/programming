#include "Triangle.h"

Triangle::Triangle(): area(0){

}
Triangle::Triangle(Vector p1, Vector p2, Vector p3){
    this->points[0] = p1;
    this->points[1] = p2;
    this->points[2] = p3;
    this->calculateArea();
}
double Triangle::calculateArea(){
    double d1 = this->points[0] | this->points[2];
    double d2 = this->points[1] | this->points[2];
    double d3 = this->points[0] | this->points[1];
    double p = (d1 + d2 + d3) / 2;
    this->area = sqrt(p * (p - d1) * (p - d2) * (p - d3));
    return this->area;
}
double Triangle::getArea(){
    return this->area;
}
bool Triangle::operator==(Triangle& t){
    return this->getArea() == t.getArea();
}
bool Triangle::operator!=(Triangle& t){
    return this->getArea() != t.getArea();
}
bool Triangle::operator>(Triangle& t){
    return this->getArea() > t.getArea();
}
bool Triangle::operator<(Triangle& t){
    return this->getArea() < t.getArea();
}
Triangle& Triangle::operator+=(Vector p){
    for(int i = 0; i < 3; i++){
        this->points[i] = this->points[i] + p;
    }
    return *this;
}
void Triangle::print(){
    for(int i = 0; i < 3; i++){
        std::cout << " (" << this->points[i].getX() << ", " << this->points[i].getY() << ") ";
    }
    std::cout << std::endl;
}