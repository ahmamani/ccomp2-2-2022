/**
 * Implementar una función para invertir los 
 * elementos de un arreglo
 * 
 * Ex. arr [1 2 3 4 5 6] despues de invocar a la 
 * función invertir arr [6 5 4 3 2 1]  
 */

#include <iostream>

using namespace std;

void imprimir(const int arr[], int tam) {
    int a=0;
    while(tam--)
        cout << arr[a++] << " ";
}

void invertir(int arr[], int tam) {
    int ini = 0;
    int fin = tam - 1;
    while(ini <= fin) {
        int tmp = arr[ini];
        arr[ini] = arr[fin];
        arr[fin] = tmp;
        ini++;
        fin--;
    } 
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int tam = sizeof(arr) / sizeof(arr[0]);

    imprimir(arr, tam);
    cout << endl;
    invertir(arr, tam);
    imprimir(arr, tam);


    return 0;
}
