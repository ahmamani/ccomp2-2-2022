#include <iostream>
#include <set>
#include <algorithm>

using namespace std;

int main() {   
    set<int> iset;

    iset.insert(5);
    iset.insert(9);
    iset.insert(1);
    iset.insert(8);
    iset.insert(3);

    cout << "iset contiene: ";
    set<int>::iterator it;

    for(it = iset.begin(); it != iset.end(); it++)
        cout << " " << *it;
    cout << endl;

    int searchFor;
    cin >> searchFor;
    if( binary_search(iset.begin(), iset.end(), searchFor) )
        cout << "Encontrado!! "  << searchFor << endl;
    else
        cout << "No encontrado!! " << searchFor << endl;

    return 0;
}