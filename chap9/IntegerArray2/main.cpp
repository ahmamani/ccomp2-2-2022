#include <iostream>
#include "IntegerArray.h"

using namespace std;

int main() {

    int array[] = {1,2,3,4,5,6,7,8,9,10};
    int tam = sizeof(array) / sizeof(array[0]);

    IntegerArray b(array, tam);

    IntegerArray *ptr = &b;

    ptr->push_back(1000);
    ptr->print();

    ptr->insert(0, 88);
    ptr->print();

    ptr->remove(4);
    ptr->print();

    IntegerArray &ref = b;
    ref.insert(1, 123425);
    b.print();



    return 0;
}