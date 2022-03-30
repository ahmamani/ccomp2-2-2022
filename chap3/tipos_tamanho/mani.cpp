#include <iostream>

using namespace std;

int main() {
    short val = 32766;

    cout << sizeof(val) << endl;

    cout << val << endl;
    val = val + 1;
    cout << val << endl;
    val = val + 1;
    cout << val << endl;

    return 0;
}
