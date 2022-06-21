#include <iostream>
#include <iomanip>
#include <vector>
#include <typeinfo>
#include "Employee.h"
#include "SalariedEmployee.h"
#include "CommissionEmployee.h"
#include "BasePlusCommissionEmployee.h"

using namespace std;

int main() {

    cout <<fixed <<setprecision(2);


    vector<Employee*> employees{
        new SalariedEmployee("Jhon" , "Smith" , "111-11-1111" ,40, 800),
        new CommissionEmployee("sue" , "jones" , "333-33-333" , 40,10000, .06),
        new BasePlusCommissionEmployee("Bob" , "Lewis" , "444-44-4444" ,40, 5000, .04 ,300),
    };

    
    for (Employee* employeePtr : employees){
        cout<<employeePtr ->toString() <<endl;
        

        BasePlusCommissionEmployee* derivedPtr =
        dynamic_cast<BasePlusCommissionEmployee*>(employeePtr);


        if(derivedPtr != nullptr){
            double oldBaseSalary = derivedPtr->getBaseSalary();
            cout<<"old base salary : $ " <<oldBaseSalary <<endl;
            derivedPtr->setBaseSalary(1.10* oldBaseSalary);
            cout<<"new base salary with 10% increase is: $"<<derivedPtr->getBaseSalary() <<endl;
        }


        cout << "earned $" <<employeePtr->earnings() <<"\n\n";

        }


        for(const Employee* employeePtr: employees) {

        cout<< "deleting object of"
            <<typeid(*employeePtr).name() <<endl;

            delete employeePtr;
        }
    }