#ifndef COMISSION_H
#define COMISSION_H

#include <string>
#include "FABIANESPINOZA_Employee.h"
#include <iomanip>
#include <stdexcept>
#include <sstream>

class ComissionEmployee : public Employee{
    private:
        double grossSales;
        double comissionRate;
    public:
        ComissionEmployee(const std::string& first, const std::string& last, const std::string& ssn, int A, double sales, double rate)
        : Employee(first, last, ssn, A)
        {setGrossSales(sales); setComissionRate(rate);}
        virtual ~ComissionEmployee() = default;

        void setGrossSales(double sales){
            if (sales < 0.0){
                throw ("Gross sales must be >=0.0");
            }
            grossSales = sales;
        }

        double getGrossSales() const {return grossSales;}

        void setComissionRate(double rate){
            if (rate <= 0.0){
                throw ("Gross sales must be >=0.0");
            }
            comissionRate = rate;
        }

        double getComissionRate() const {return comissionRate;}

        double earnings() const {return getComissionRate() * getGrossSales();}

        void aumento(){
            if(getAge()>50)
                grossSales=grossSales*1.2;                
        }

        std::string toString() override{
            std::ostringstream output;
            output << std::fixed << std::setprecision(2);
            output << "commission employee: " << Employee::toString() << "\ngross sales: " << getGrossSales() << "\nget commision rate: " << getComissionRate() << "\n";
            return output.str();
        }

};
#endif