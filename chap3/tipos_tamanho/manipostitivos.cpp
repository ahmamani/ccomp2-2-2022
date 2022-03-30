#include <iostream>

using namespace std;

int main() {
    unsigned short val = 65535;

    cout << sizeof(val) << endl;

    cout << val << endl;
    val = val + 1;
    cout << val << endl;
    val = val + 1;
    cout << val << endl;

    int x = 10;
    cout << sizeof(x) << endl;
    long y = 10;
    cout << sizeof(y) << endl;
    long long z = 10;
    cout << sizeof(z) << endl;


    return 0;
}
