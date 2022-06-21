#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <iostream>
#include <string.h>

using namespace std;

class Employee{
protected:
    string nombre;
    string apellido;
    string id;
    int edad;
    float salario;
public:
    Employee(string n,string a,string i,int e,float s){
        nombre = n;
        apellido = a;
        id = i;
        edad = e;
        salario = s;
    }

    virtual string toString(){
        string persona="";
        persona+="Nombre completo: "+nombre+" "+apellido+"\n";
        persona+="Edad: "+std::to_string(edad)+"\n";
        persona+="ID: "+id+"\n";
        persona+="Salario: "+std::to_string(salario)+"\n";
        return persona;
    }

    virtual float getBaseSalary(){return salario;}
    virtual void setBaseSalary(float n){salario=n;}

    virtual float earnings(){return salario*12;}
};

#endif