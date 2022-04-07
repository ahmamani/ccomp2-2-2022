#include <iostream>

using namespace std;

void swap(int &a, int &b) {
    int t = a;
    a = b;
    b = t;
}

int main() {
    int q = 10;
    int r = 15;

    swap(q, r);
    
    cout << "q = " << q << endl;
    cout << "r = " << r << endl;

    return 0;
}