#include "Employee.h"

class BasePlusCommissionEmployee: public Employee{
    float comision,baseplus;
public:
    BasePlusCommissionEmployee(string n,string a,string i,int e,float s,float c,float bp):
        Employee(n,a,i,e,s)
    {

    }

    float earnings(){return salario*(1+comision)*12+baseplus;}
};