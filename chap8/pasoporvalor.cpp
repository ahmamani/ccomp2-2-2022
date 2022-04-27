#include <iostream>

using namespace std;

void  pasoPorValor(int n);
void pasoPorReferenciaUsandoRef(int &n);
void pasoPorReferenciaUsandoPtr(int *n);

int main(){
    int num{5};

    cout << "Valor original : " << num << endl;
    pasoPorValor(num);
    cout << "nuevo valor : " << num << endl;

    num = 5;
    pasoPorReferenciaUsandoRef(num);    
    cout << "nuevo valor : " << num << endl;

    num = 5;
    pasoPorReferenciaUsandoPtr( &num );
    cout << "nuevo valor : " << num << endl;

    return 0;
}

void pasoPorReferenciaUsandoPtr( int* n ) {
    *n = *n * *n * *n;
}

void  pasoPorValor(int n) {
    n = n * n * n;
}

void pasoPorReferenciaUsandoRef(int &n) {
    n = n * n * n;
}
