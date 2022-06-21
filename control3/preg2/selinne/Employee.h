 // Fig. 12.9: Employee.h
 // Employee abstract base class.
#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string> // C++ standard string class
class Employee {
public:
 Employee(const std::string&, const std::string&, const std::string&, const int&);
 virtual ~Employee() = default; // compiler generates virtual destructor

 void setFirstName(const std::string&); // set first name
 std::string getFirstName() const; // return first name

 void setLastName(const std::string&); // set last name
 std::string getLastName() const; // return last name

 void setSocialSecurityNumber(const std::string&); // set SSN
 std::string getSocialSecurityNumber() const; // return SSN
 
 void setage(const int&);
 int  getage()const;

 private:
 std::string firstName;
 std::string lastName;
 std::string socialSecurityNumber;
 int age;
 }; 

#endif // EMPLOYEE_H