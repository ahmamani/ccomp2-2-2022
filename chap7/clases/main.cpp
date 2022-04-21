#include <iostream>
#include "Account.h"

using namespace std;

void imprimir(const Account arr[], int tam) {
    int a=0;
    while(tam--)
        cout << arr[a++].getName() << " - ";
}

void intercambio(Account &a, Account &b) {
    Account tmp = a;
    a = b;
    b = tmp;
}

void invertir(Account arr[], int tam) {
    int ini = 0;
    while(ini < tam) {
        intercambio(arr[ini++], arr[--tam]);
    }
}

void invertirRec(Account arr[], int tam, int ini = 0) {
    if(ini>=tam)
       return;
    intercambio(arr[ini++], arr[--tam]);
    invertirRec(arr, tam, ini);
}

int main() {
    Account aFab{"Fabian Espinoza", 50};
    Account aManuel{"Manuel Charaja", 100};
    Account aSelinne{"Sel", 1000};
    Account aEsteban{"Esteban Medina", 10};

    Account arr[] = {aFab, aManuel, aSelinne, aEsteban};
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
