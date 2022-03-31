#include <iostream>

using namespace std;

int main () {
    // Implemente un programa que solicite por teclado un numero 
    // e indique si dicho numero es par o impar

    int num;
    cout << "Ingrese un numero: ";
    cin >> num;

    /*
    if(num % 2)
        cout << "Es impar" << endl;
    else
        cout << "Es par" << endl;
    */

    cout << ( !(num % 2) ? "Es par" : "Es impar") << endl;

    return 0;
}
