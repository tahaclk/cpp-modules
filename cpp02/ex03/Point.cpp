#include "Point.hpp"

Point::Point(): x(Fixed()), y(Fixed()){
}

Point::Point(const float valueX, const float valueY): x(Fixed(valueX)), y(Fixed(valueY)){
}

Point::Point(const Point &point):x(point.x), y(point.y){
}

Point::~Point(){
}

Point &Point::operator=(const Point &point){
    this->~Point();
    new (this) Point(point.x.toFloat(), point.y.toFloat());
    return (*this);
}

Fixed Point::getX(void){
    return (this->x);
}

Fixed Point::getY(void){
    return (this->y);
}

std::ostream &operator<<(std::ostream &out, Point &point){
    out<<point.getX();
    return (out);
}
