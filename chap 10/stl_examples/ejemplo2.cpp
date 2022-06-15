#include <iostream>
#include <algorithm>

using namespace std;

void print(const int arr[], const int tam) {
    for(int i = 0; i < tam; i++)
        cout << " " << arr[i];
    cout << endl;
}

int main() {
    int a[] = {5, 6, 8, 9, 7};

    sort(a, a+5);
    print(a, 5);
    rotate(a, a+2, a+5);
    print(a, 5);
    reverse(a, a+5);
    print(a, 5);
    
    return 0;
}