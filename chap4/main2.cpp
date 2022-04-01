#include <iostream>

using namespace std;

int main () {
    // Implemente un programa que solicite por teclado un numero 
    // e imprima los numeros pares positivos menores a dicho numero.

    int num;
    cout << "Ingrese un numero: ";
    cin >> num;

    /**
     * break : rompe el bucle, sale del bucle
     * continue : salta a la siguiente iteración
    */

    while( num-- ) {
        if ( num % 2 )
            continue;
        cout << num;
        if (num != 0)
            cout << " - ";
    }

    return 0;
}
