#include <iostream>
#include <iomanip>
#include <vector>
#include "FABIANESPINOZA_Employee.h"
#include "FABIANESPINOZA_SalariedEmployee.h"
#include "FABIANESPINOZA_ComissionEmployee.h"
#include "FABIANESPINOZA_BasePlusComissionEmployee.h"
using namespace std;

int main(){
    cout << fixed << setprecision(2);

    vector <Employee*> employees{
        new SalariedEmployee("John", "Smith", "111-11-1111", 51, 800),
        new ComissionEmployee("Sue", "Jones", "333-33-3333", 85, 10000,.06),
        new BasePlusCommisionEmployee("John", "Smith", "444-44-4444", 75, 5000, .04, 300)
    };
    for (Employee* employeePtr : employees){
        cout << employeePtr->toString();
        cout << "\nSalario inicial: " << employeePtr->earnings() << endl;
        employeePtr->aumento();

        BasePlusCommisionEmployee* derivedPtr =
            dynamic_cast<BasePlusCommisionEmployee*>(employeePtr);
        
        if (derivedPtr != nullptr) {
            double oldBaseSalary = derivedPtr->getBaseSalary();
            cout << "old base salary: $" << oldBaseSalary << endl;
            derivedPtr->setBaseSalary(1.1*oldBaseSalary);
            cout << "new base salary with 10% increase is: $" << derivedPtr->getBaseSalary() << endl;
        }
        cout << "Salario final: " << employeePtr->earnings() << "\n\n";        
    }
    for (Employee* employeePtr : employees){
        cout << "\ndeleting object of "<< typeid(*employeePtr).name() << "\n";
        delete employeePtr;
    }
}

