#include <iostream>
#include "IntegerArray.h"

using namespace std;

int main() {

    IntegerArray a(2);
    a.data[0] = 4;
    a.data[1] = 2;

    if(true) {
        IntegerArray b = a;
    }
    cout << a.data[0] << endl;

    return 0;
}