#ifndef __POINT_H__
#define __POINT_H__

template <typename T>
class Point {
    private:
        T x, y;
    public:
        Point(const T a, const T b) : x(a), y(b) {}
        T getX() const ;
        T getY() const ;
};

template<typename T>
T Point<T>::getX() const {
    return x;
}

template<typename T>
T Point<T>::getY() const {
    return y;
}


#endif