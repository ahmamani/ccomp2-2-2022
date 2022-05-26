#ifndef __POINT_H__
#define __POINT_H__

class Point {
    public:
        double x, y;
        void offset(double _x, double _y);
        void print() const;
};

#endif