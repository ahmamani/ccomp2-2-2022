/**
 * Implementar una función para invertir los 
 * elementos de un arreglo USANDO PUNTEROS
 * 
 * Ex. arr [1 2 3 4 5 6] despues de invocar a la 
 * función invertir arr [6 5 4 3 2 1]  
 */

#include <iostream>

using namespace std;

void imprimir(const int *arr, int tam) {
    int a=0;
    while(tam--)
        cout << *arr++ << " ";
}

void intercambio(int &a, int &b) {
    int tmp = a;
    a = b;
    b = tmp;
}

void intercambio(int *a, int *b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void invertir(int *ini, int *fin) {    
    while(ini < fin) {
        intercambio(ini++, fin--);
    }
}

void invertirRec(int *ini, int *fin) {
    if(ini >= fin)
       return;
    intercambio(ini++, fin--);
    invertirRec(ini, fin);
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9 };
    int tam = sizeof(arr) / sizeof(arr[0]);

    imprimir(arr, tam);
    cout << endl;
    invertir(arr, arr+tam-1); 
    imprimir(arr, tam);
    cout << endl;
    invertirRec(arr, arr+tam-1);
    imprimir(arr, tam);
    
    return 0;
}
