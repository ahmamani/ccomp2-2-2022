#include <iostream>

using namespace std;

void pasoPorReferenciaUsandoPtr(int *n);

int main(){
    int num1{5};
    int num2{8};    

    int *ptr = &num1;
    *ptr = 200;

    cout << *ptr << endl;

    ptr = &num2;
    *ptr = 400;
    cout << *ptr << endl;
    
    //pasoPorReferenciaUsandoPtr( &num );
    //cout << "nuevo valor : " << num << endl;

    return 0;
}

void pasoPorReferenciaUsandoPtr( int* n ) {
    *n = *n * *n * *n;
}
