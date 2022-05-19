#include <iostream>
#include "Vector.h"

using namespace std;

int main() {
    Vector v1;
    v1.start.x = 0;
    v1.start.y = 0;
    v1.end.x = 1;
    v1.end.y = 1;

    Vector v2;
    v2.start.x = 0;
    v2.start.y = 0;
    v2.end.x = 4;
    v2.end.y = 3;

    Vector v3;
    v3.start.x = 0;
    v3.start.y = 0;
    v3.end.x = 7;
    v3.end.y = 24;

    Vector arr[] = {v1, v2, v3};

    for(Vector v : arr)
        cout << v.module() << endl;

    return 0;
}
