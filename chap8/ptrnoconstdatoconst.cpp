#include <iostream>

using namespace std;

void pasoPorReferenciaUsandoPtr(const int *n);

int main(){
    int num1{5};
    int num2{8};    

    probandoPtrNoConstDatoConst( &num );
    cout << "nuevo valor : " << num << endl;

    return 0;
}

// ERROR
void probandoPtrNoConstDatoConst( const int* n ) {
    *n = *n * *n * *n;
}
