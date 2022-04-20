#include <iostream>
#include <array>

using namespace std;

const size_t _size{9};
void imprimir(const array<int, _size> arr) {
    for(int elem : arr)
        cout << elem << " ";
    cout << endl;
}

void imprimirRr(const array<int, _size> arr, int _idx = 0) {
    if(_idx == arr.size()){
        cout << endl;
        return;
    }
    else{
        cout << arr[_idx] << " ";
        imprimirRr(arr, ++_idx);
    }
}

int main() {
    //int arr[] = {1, 2, 3, 4, 5, 6, 7, 8,9};
    array<int, 10> arr{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    imprimir(arr);
    imprimirRr(arr);

    return 0;
}
