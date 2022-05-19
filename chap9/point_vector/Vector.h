#ifndef __VECTOR_H__
#define __VECTOR_H__

#include "Point.h"

class Vector {
    public:
        Point start, end;
        void offset(double _x, double _y);
        void print() const;

        double module() const;
};

#endif