#include <iostream>

using namespace std;

class Square;

class Rectangle {        
        int width, height;
    public:
        Rectangle() {}
        Rectangle(int x, int y) : width(x), height(y) {}
        int area();
        void convert(Square a);
};

int Rectangle::area() {
    return width * height;
}

class Square {
    friend class Rectangle;
    private:
        int side;
    public:
        Square(int a) : side(a) {}
};

void Rectangle::convert(Square a) {
    width = a.side;
    height = a.side;
}

int main() {
    Rectangle rect;
    Square sqr(4);
    rect.convert(sqr);
    cout << rect.area() << endl;

    return 0;
}