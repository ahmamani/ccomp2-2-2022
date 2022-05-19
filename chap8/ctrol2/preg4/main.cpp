#include <iostream>
#include "Punto3D.h"

using namespace std;

void imprimirPuntos(Punto3D arr[], int tam) {
    for (int i = 0 ; i < tam; i++) {
        arr[i].print();
    }
}

int main() {
    Punto3D p1;
    Punto3D p2(1,2,3);
    Punto3D p3(1,4,3);
    Punto3D p4(1,5,3);
    Punto3D p5(1,6,3);


    Punto3D arr[5] = {p1, p2, p3, p4, p5};

    for(Punto3D p : arr) {
        p.print();
    }

    for (int i = 0 ; i < 5; i++) {
        arr[i].setX(i);
    }

    Punto3D *ptr = arr+4;

    for (int i = 4 ; i <= 0; i--) {
        arr[i].print();
    }

    return 0;
}
