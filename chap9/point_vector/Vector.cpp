#include <iostream>
#include <cmath>

#include "Vector.h"

void Vector::offset(double _x, double _y) {
    start.offset(_x, _y);
    end.offset(_x, _y);
}


void Vector::print() const {
    start.print();
    std::cout << " -> ";
    end.print();
    std::cout << std::endl;
}

double Vector::module() const {
    return sqrt(pow(end.x - start.x,2) + pow(end.y - start.y,2));
}
