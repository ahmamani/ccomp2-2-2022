#include <iostream>

using namespace std;

/**
* fib(n) = fib(n-1) + fib(n-2)
* fib(0) = 1
* fib(1) = 1
* fib(2) = 2
* fib(3) = 3
* fib(4) = 5 ......
*/

// recursivo
int fib_rec(int n) {
    if(n == 1 || n == 0)
        return 1;
    else{
        return fib_rec(n-1) + fib_rec(n-2);
    }
}

// iterativo
int fib_iter(int n) {
    int d=2;
    int a=1;
    int b=1;
    int c=0;
    while(d<=n){
        c=a+b;
        a=b;
        b=c;
        d+=1;
    }
    return c;
}

int main() {
    cout << fib_rec(5) << endl;

    cout << fib_iter(5) << endl;

    return 0;
}