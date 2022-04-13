#include <iostream>

using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};

    // Imprime una dirección de memoria y no los elementos del arreglo?????
    cout << "Suma de elementos: " << arr << endl;  

    // ¿como conozco el tamaño de un arreglo? sizeof
    int tam = sizeof(arr) / sizeof(arr[0]);
    cout << tam << endl;
    
    // ¿Que pasa si acceso a una posición invalida?
    arr[8] = 10;
    cout << arr[8] << endl;

    return 0;
}
