#include <iostream>

class Punto3D {

    private:
        int x;
        int y;
        int z;
    public:
        Punto3D() : x(0), y(0), z(0) {}

        Punto3D(int _x, int _y, int _z) : x(_x), y(_y), z(_z) {}

        void setX(int _x) {
            x = _x;
        }
        void setY(int _y) {
            y = _y;
        }
        void setZ(int _z) {
            z = _z;
        }
        int getX() const {
            return x;
        }
        int getY() const {
            return y;
        }
        int getZ() const {
            return z;
        }

        void print() const {
            std::cout << "(" << x << ", " << y << ", " << z << ")" << std::endl;
        }

};