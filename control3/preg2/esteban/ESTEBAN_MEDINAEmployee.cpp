#include <sstream>
#include "ESTEBAN_MEDINAEmployee.h"
using namespace std;
Employee::Employee(const string& first, const string& last,
    const string& ssn, const string& a)
    :firstName(first), lastName(last), socialSecurityNumber(ssn),age(a){}
// set first name
void Employee::setFirstName(const string& first) {firstName = first;}
// return first name
string Employee::getFirstName() const {return firstName;}
// set last name
void Employee::setLastName(const string& last) {lastName = last;}
// return last name
string Employee::getLastName() const {return lastName;}
// set social security number
void Employee::setSocialSecurityNumber(const string& ssn) {
    socialSecurityNumber = ssn; // should validate
}
// return social security number
string Employee::getSocialSecurityNumber() const {
    return socialSecurityNumber;
}
// set age
string Employee::getage() const {
// return age
    return age; 
}
// toString Employee's information (virtual, but not pure virtual)
string Employee::toString() const {
    return getFirstName() + " "s + getLastName() +
        "\nsocial security number: "s + getSocialSecurityNumber();
}