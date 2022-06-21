#include "Employee.h"

class CommissionEmployee: public Employee{
    float comision;
public:
    CommissionEmployee(string n,string a,string i,int e,float s,float c):
        Employee(n,a,i,e,s)
    {
        comision = c;
    }

    float earnings(){return salario*(1+comision)*12;}