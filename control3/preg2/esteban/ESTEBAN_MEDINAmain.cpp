#include<iostream>
#include<iomanip>
#include<vector>
#include<typeinfo>
#include "ESTEBAN_MEDINAEmployee.h"
#include "ESTEBAN_MEDINASalariedEmployee.h"
#include "ESTEBAN_MEDINACommissionEmployee.h"
#include "ESTEBAN_MEDINABasePlusCommissionEmployee.h"
using namespace std;

int main(){
    cout << fixed << setprecision(2);

    vector <Employee*> employees{
        new SalariedEmployee("John", "Smith", "111","29",800),
        new CommissionEmployee("Sue", "Smith", "111","31",800),
        new BasePlusCommissionEmployee("Bob", "Smith", "111","24",800)};

    for (Employee* employeePtr : employees){
        cout << employeePtr->toString()<<endl;


        BasePlusCommissionEmployee* derivedPtr =dynamic_cast<BasePlusCommissionEmployee*>(employeePtr);
        

        if (derivedPtr != nullptr){
            double oldBaseSalary = derivedPtr -> getBaseSalary();
            cout<<"old base salary: $" <<oldBaseSalary << endl;
            derivedPtr ->setBaseSalary(1.10 *oldBaseSalary);
            cout << "new base salary with 10% increase is : $" << derivedPtr->getBaseSalary() << endl;
   
        }
        cout << "earned $" << employeePtr -> earnings()<< "\n\n";
    }
    

    for(const Employee* employeePtr : employees){
        cout << "deleting objetc of" << typeid(*employeePtr).name()<<endl;
        delete employeePtr;
    }
}