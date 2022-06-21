#include <iostream>
#include <string>
#include "GenericArray.h"

using namespace std;

int main() {

    int array[] = {1,2,3,4,5,6,7,8,9,10};
    int tam = sizeof(array) / sizeof(array[0]);

    GenericArray<int> b(array, tam);

    GenericArray<int> *ptr = &b;

    ptr->push_back(1000);
    ptr->print();

    ptr->insert(0, 88);
    ptr->print();

    ptr->remove(4);
    ptr->print();

    GenericArray<int> &ref = b;
    ref.insert(1, 123425);
    b.print();

    GenericArray<string> c;
    c.push_back("ciencia");
    c.push_back("de");
    c.push_back("la");
    c.push_back("computacion");

    c.print();

    return 0;
}