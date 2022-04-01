#include <iostream>

using namespace std;

int main () {
    // Implemente un programa que solicite por teclado un numero 
    // e imprima si dicho numero es PRIMO.

    int num;
    cout << "Ingrese un numero: ";
    cin >> num;
    int y=2;

    while(y<=num){
        if(y==num){
            cout << "Es primo";
            break;
        }
        if(num%y==0){
            cout << "No es primo";
            break;
        }
        y+=1;
    }
    return 0;
}
