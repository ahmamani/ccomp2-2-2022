#include <iostream>
#include "IntegerArray.h"

using namespace std;

int main() {

    int array[] = {1,2,3,4,5,6,7,8,9,10};
    int tam = sizeof(array) / sizeof(array[0]);

    IntegerArray b(array, tam);

    b.push_bach(100);
    b.print();

    b.insert(5,50);
    b.print();

    b.remove(2);
    b.print();

    return 0;
}