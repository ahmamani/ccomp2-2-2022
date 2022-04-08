#include <iostream>

using namespace std;

// recursivo
int factorial(int val) {
    if(val == 1)
        return 1;
    return val * factorial( val-1 );
}

// iterativo
int factorial2(int val) {
    int a=1;
    int b=1;
    while(a<=val){
        b=b*a;
        a+=1;
    }
    return b;
}

int main() {
    cout << factorial2(5) << endl;

    return 0;
}