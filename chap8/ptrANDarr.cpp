#include <iostream>

using namespace std;

void pasoPorReferenciaUsandoPtr(const int *n);
void iterativa(int *arr, int tam);
void pares(int *arr, int tam);
void final(int*arr, int tam);
void impares(int *arr, int tam);

int main(){
    
    int arr[] = {2, 3, 4, 5, 6, 7, 8, 15};
    
    // asignando la dirección de memoria del primer elemento del arreglo
    int *ptr = arr; //&arr[0];

    cout << *ptr << endl; // imprime -> 2

    int tam = sizeof(arr) / sizeof(arr[0]);

    ptr = &arr[tam - 1];
    cout << *ptr << endl; // imprime -> 15

    /**
     * @Fabian
     * USANDO UNICAMENTE PUNTEROS: imprimir los elementos del 
     * arreglo del inicio al final
     */
    iterativa(arr, tam);

    
    /**
     * @Esteban
     * USANDO UNICAMENTE PUNTEROS: imprimir los elementos del arreglo del final al inicio
    */

    final(ptr, tam);

    /**
     * @Manuel
     * USANDO UNICAMENTE PUNTEROS: imprimir los elementos PARES del arreglo
     */
    pares(arr, tam);

    /**
     * @Selinne
     * USANDO UNICAMENTE PUNTEROS: imprimir los elementos IMPARES del arreglo
     */
     
    impares(arr, tam);

    return 0;
}
void iterativa(int *arr, int tam){
    for(; tam; arr++, tam--){
        cout << *arr << " ";
    }
    cout << endl;
}

void final(int*arr, int tam){
    for(int i = tam; i >0;arr--, i--){
        cout<<*arr<<" ";
    }
    cout << endl;
}

void pares(int *arr, int tam){
    for(; tam; tam--, arr++){
        if( !(*arr % 2) ){
            cout << *arr << " " ;
        }
    }
    cout << endl;
}

void impares(int *arr, int tam){
    for(; tam; tam--, arr++){
    if( (*arr % 2) ){
            cout << *arr << " " ;
        }
    }
    cout << endl;
}