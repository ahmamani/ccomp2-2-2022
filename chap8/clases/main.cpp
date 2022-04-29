#include <iostream>
#include "Account.h"

using namespace std;

void imprimir(const Account *arr, int tam) {
    int a=0;
    while(tam--) {
        cout << arr->getName() << " - ";
        arr++;
    }
}

void intercambio(Account &a, Account &b) {
    Account tmp = a;
    a = b;
    b = tmp;
}

void intercambio(Account *a, Account *b) {
    Account tmp = *a;
    *a = *b;
    *b = tmp;
}

void invertir(Account *ini, Account *fin) {    
    while(ini < fin) {
        intercambio(ini++, fin--);
    }
}

void invertirRec(Account *ini, Account *fin) {
    if(ini >= fin)
       return;
    intercambio(ini++, fin--);
    invertirRec(ini, fin);
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
    invertir(arr, arr+tam-1);
    imprimir(arr, tam);
    cout << endl;
    invertirRec(arr, arr+tam-1);
    imprimir(arr, tam);


    return 0;
}
