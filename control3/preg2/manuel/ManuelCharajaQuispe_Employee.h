#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string.h>
using namespace std;
class Employee {
    protected:
    string Nombre;
    string Apellido;
    string id;
    int Edad;
    float Salario;

    public:
    Employee(string _nombre, string _apellido, string _id, int _edad, float _sal){
        Nombre = _nombre;
        Apellido = _apellido;
        id = _id;
        Edad = _edad;
        Salario = _sal;
    }
    virtual string toString(){
        cout << "Nombre completo: "<< Nombre << " " << Apellido << endl;
        cout << "Edad: " << Edad << endl;
        cout << "Id: " << id << endl;
        cout << "Salario: " << Salario << endl;
    }

    virtual float setBaseSalary(float a){
        Salario = a;
    }
    virtual float getBaseSalary(){
         return Salario;
    }
    virtual float earnings(){
        return (Salario*12/100);
    }

}; 
#endif
