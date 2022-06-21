#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>
class Employee {
public:
    Employee(const std::string&, const std::string&, const std::string&,const std::string&);
    virtual ~Employee() = default; // compiler generates virtual destructor

    void setFirstName(const std::string&);
    std::string getFirstName() const;

    void setLastName(const std::string&); 
    std::string getLastName() const;

    void setSocialSecurityNumber(const std::string&); // set SSN
    std::string getSocialSecurityNumber() const; // return SSN

    void setage(const std::string&);
    std::string getage() const;   
    
    
    // pure virtual function makes Employee an abstract base class
    virtual double earnings() const = 0; // pure virtual
    virtual std::string toString() const; // virtual 

private:
    std::string firstName;
    std::string lastName;
    std::string socialSecurityNumber;
    std::string age;
};
#endif