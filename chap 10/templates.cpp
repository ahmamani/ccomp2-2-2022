#include <iostream>

using namespace std;

template <typename T>
T sum(const T a, const T b) {
    return a + b;
}

template <typename T, typename U>
U sum2(const T a, const U b) {
    return a + b;
}

int main() {
    cout << sum<int>(1, 3) << endl;
    cout << sum<float>(1.53, 3.33) << endl;

    cout << sum2<float, int>(1, 3.33) << endl;

    return 0;
}