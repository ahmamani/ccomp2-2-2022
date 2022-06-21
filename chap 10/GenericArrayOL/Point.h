#ifndef __POINT_H__
#define __POINT_H__

#include <iostream>

template <typename T>
class Point {
        T x , y;
    public:
        Point(const T _x = 0, const T _y = 0) : x(_x), y(_y) {}
        
        T getX() const { return x; }
        T getY() const { return y; }

        void setX(const T _x) { x = _x; }
        void setY(const T _y) { y = _y; }

};

template <typename T>
std::ostream& operator<<(std::ostream& o, const Point<T> a){
    o << "(" << a.getX() << ";" << a.getY() << ")";
    return o;
}

#endif