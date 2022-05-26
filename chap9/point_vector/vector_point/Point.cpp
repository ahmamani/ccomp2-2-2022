#include <iostream>
#include "Point.h"

void Point::offset(double _x, double _y){
    x += _x;
    y += _y;
}

void Point::print() const {
    std::cout << "(" << x << ", " << y << ")";
}