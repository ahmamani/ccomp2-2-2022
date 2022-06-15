#include <iostream>
#include "Point.h"

using namespace std;

int main() {
    Point<float> p(3.3, 4.56);

    cout << p.getX() << ", " << p.getY() << endl;

    return 0;
}