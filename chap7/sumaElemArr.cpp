#include <iostream>

using namespace std;

int sumar(const int array[], const int tam) {
    long sum = 0;
    for(int i = 0; i < tam; sum += array[i++]);
    return sum;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};

    cout << "Suma de elementos: " << sumar(arr, 8) << endl;

    return 0;
}
