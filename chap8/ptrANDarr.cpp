#include <iostream>

using namespace std;

void pasoPorReferenciaUsandoPtr(const int *n);

int main(){
    
    int arr[] = {2, 3, 4, 5, 6, 7, 8, 15};

    // asignando la dirección de memoria del primer elemento del arreglo
    int *ptr = &arr[0];

    cout << *ptr << endl; // imprime -> 2

    int tam = sizeof(arr) / sizeof(arr[0]);

    ptr = &arr[tam - 1];
    cout << *ptr << endl; // imprime -> 15

    return 0;
}

