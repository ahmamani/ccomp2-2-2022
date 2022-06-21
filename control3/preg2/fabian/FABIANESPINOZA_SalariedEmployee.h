#ifndef SALARIED_H
#define SALARIED_H

#include <string>
#include "FABIANESPINOZA_Employee.h"
#include <iomanip>
#include <stdexcept>
#include <sstream>

class SalariedEmployee : public Employee{
    private:
        double weeklySalary;
    public:
        SalariedEmployee(const std::string& first, const std::string& last, const std::string& ssn, int A, double salary)
        : Employee(first, last, ssn, A){setWeeklySalary(salary);}
        virtual ~SalariedEmployee() = default;

        void setWeeklySalary(double salary){
            if (salary <0.0){
                throw ("Weekly salary must be >=0.0");
            }
            weeklySalary = salary;
        }

        double getWeeklySalary() const {return weeklySalary;}

        double earnings() const {return getWeeklySalary();}

        void aumento(){
            if(getAge()>50)
                weeklySalary=weeklySalary*1.2;                
        }

        std::string toString() override{
            std::ostringstream output;
            output << std::fixed << std::setprecision(2);
            output << "salaried employee: " << Employee::toString() << "\nWeekly salary: " << getWeeklySalary() << "\n";
            return output.str();
        }

};
#endif
