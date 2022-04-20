#include <iostream>

using namespace std;

void imprimir(const int arr[], int tam) {
    int a=0;
    while(tam--)
        cout << arr[a++] << " ";
}

void imprimirRr(const int arr[], int tam, int ini=0) {
    if(tam==0){
        return;
    }
    else{
        cout << arr[ini] << " ";
        imprimirRr(arr,--tam, ++ini);
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int tam = sizeof(arr) / sizeof(arr[0]);

    imprimirRr(arr, tam);

    return 0;
}
