#ifndef SALARIED_H
#define SALARIED_H
#include <string>
#include "Employee.h"

class SalariedEmployee : public Employee {
public:

SalariedEmployee( string _nombre, string _apellido, string _id, int _edad, float _sal){
            Employee(_nombre,_apellido,_id,_edad,_sal);
}

    
};
#endif
