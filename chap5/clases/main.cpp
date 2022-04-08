#include <iostream>
#include <string>
#include "Account.h"

using namespace std;

// Implementar una función que reciba un objeto de tipo Account e imprima su nombre 
// if su balance es mayor que 100
void printAccountIf(Account account) {
    if(account.getBalance() > 100 ) {
        cout << account.getName() << endl;
    }
}

// Implementar una función que permita el retiro de dinero si el saldo final es mayor que 100
void verificaryProcesarRetiro(Account &account, int val) {
    if( (account.getBalance() - val) > 100) {
        cout << "Procesando el retiro" << endl;
        account.withdraw(val);
    } else {
        cout << "No se puede procesar el retiro" << endl;
    }
}

int main() {
    Account account1{"Jane Green", 120};
    Account account2{"John Blue", -7};

    printAccountIf(account1);
    printAccountIf(account2);

    verificaryProcesarRetiro(account1, 15);
    cout << account1.getBalance() << endl;

    return 0;
}

