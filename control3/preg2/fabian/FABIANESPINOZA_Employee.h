#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>

class Employee{
    private:
        std::string firstName;
        std::string lastName;
        std::string socialSecurityNumber;
        int age;
    public:
        Employee(const std::string& first, const std::string& last, const std::string& ssn, const int A)
        :firstName(first), lastName(last), socialSecurityNumber(ssn), age(A){}
        virtual ~Employee() = default;

        void setFirstName(const std::string& first) {firstName = first;};
        std::string getFirstName() const {return firstName;}

        void setlastName(const std::string& last) {lastName = last;};
        std::string getlastName() const {return lastName;}
        
        void setAge(const int A) {age = A;};
        int getAge() const {return age;}

        void setsocialSecurityNumber(const std::string& ssn) {socialSecurityNumber = ssn;};
        std::string getsocialSecurityNumber() const {return socialSecurityNumber;}

        virtual double earnings() const = 0;
        virtual void aumento() = 0;
        virtual std::string toString() {
            return getFirstName() + " " + getlastName() + "\nsocial security number: " + getsocialSecurityNumber() + "\nEdad: " + std::to_string(getAge());
        }
};
#endif
