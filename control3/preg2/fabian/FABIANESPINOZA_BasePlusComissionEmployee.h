#ifndef BASEPLUS_H
#define BASEPLUS_H

#include <string>
#include "FABIANESPINOZA_ComissionEmployee.h"
#include <iomanip>
#include <stdexcept>
#include <sstream>

class BasePlusCommisionEmployee : public ComissionEmployee{
    private:
        double baseSalary;
    public:
        BasePlusCommisionEmployee(const std::string& first, const std::string& last, const std::string& ssn, int A, double sales, double rate, double salary)
        : ComissionEmployee(first, last, ssn, A, sales, rate) {setBaseSalary(salary);}
        virtual ~BasePlusCommisionEmployee() = default;

        void setBaseSalary(double salary){
            if (salary <0.0){
                throw ("Gross sales must be >=0.0");
            }
            baseSalary = salary;
        }

        double getBaseSalary() const {return baseSalary;}

        double earnings() const {return getBaseSalary() + ComissionEmployee::earnings();}

        void aumento(){
            if(getAge()>50)
                ComissionEmployee::setGrossSales(ComissionEmployee::getGrossSales()*1.2);
                baseSalary=baseSalary*1.2;                
        }
        std::string toString() override{
            std::ostringstream output;
            output << std::fixed << std::setprecision(2);
            output << "base-salaried " << ComissionEmployee::toString() << "base salary: " << getBaseSalary() << "\n";
            return output.str();
        }

};
#endif
