#ifndef BASEPLUS_H
#define BASEPLUS_H

#include <string>
#include "ESTEBAN_MEDINACommissionEmployee.h"
class BasePlusCommissionEmployee : public CommissionEmployee {
public:
    BasePlusCommissionEmployee(const std::string&,const std::string&,const std::string&, double = 0.0, double = 0.0, double = 0.0,double = 0.0);
    virtual ~BasePlusCommissionEmployee() = default; // virtual destructor
    void setBaseSalary(double); // set base salary
    double getBaseSalary() const; // return base salary
    virtual double earnings() const override;
    virtual std::string toString() const override; 
private:
    double baseSalary;
};
#endif
