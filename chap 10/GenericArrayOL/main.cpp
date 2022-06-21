#include <iostream>
#include <string>
#include "GenericArray.h"
#include "Point.h"

using namespace std;

int main() {

    int array[] = {1,2,3,4,5,6,7,8,9,10};
    int tam = sizeof(array) / sizeof(array[0]);

    GenericArray<int> b(array, tam);

    GenericArray<int> *ptr = &b;

    ptr->push_back(1000);
    cout << b << endl;

    ptr->insert(0, 88);
    cout << *ptr << endl;

    ptr->remove(4);
    cout << *ptr << endl;

    GenericArray<int> &ref = b;
    ref.insert(1, 123425);
    cout << b << endl;

    GenericArray<string> c;
    c.push_back("ciencia");
    c.push_back("de");
    c.push_back("la");
    c.push_back("computacion");

    cout << c << endl;

    //*****************************************************
    Point<float> ab(2.5,3.5);
    Point<float> bc(1.0,2.0);
    GenericArray<Point<float>> fg;
    fg.push_back(ab);
    fg.push_back(bc);
    cout << fg << endl;
        

    return 0;
}