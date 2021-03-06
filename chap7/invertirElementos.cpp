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

void intercambio(int &a, int &b) {
    int tmp = a;
    a = b;
    b = tmp;
}

void invertir(int arr[], int tam) {
    int ini = 0;
    while(ini <= tam) {
        intercambio(arr[ini++], arr[--tam]);
    }
}

void invertirRec(int arr[], int tam, int ini = 0) {
    if(ini>=tam)
       return;
    intercambio(arr[ini++], arr[--tam]);
    invertirRec(arr, tam, ini);
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9 };
    int tam = sizeof(arr) / sizeof(arr[0]);

    imprimir(arr, tam);
    cout << endl;
    invertir(arr, tam);
    imprimir(arr, tam);
    cout << endl;
    invertirRec(arr, tam);
    imprimir(arr, tam);


    return 0;
}
