#include "Employee.h"

class SalariedEmployee: public Employee{
public:
    SalariedEmployee(string n,string a,string i,int e,float s):
        Employee(n,a,i,e,s)
    {

    }
};