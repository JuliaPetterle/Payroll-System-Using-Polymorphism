#include <iostream>

using std::cout;

#include "baseplus.h"

BasePlusCommissionEmployee::BasePlusCommissionEmployee(
    const string &first, const string &last, 
    const string &SSN, double sales, double rate,
    double salary)
    : CommissionEmployee(first, last, SSN, sales, rate)
{
    setBaseSalary(salary);
}

void BasePlusCommissionEmployee::setBaseSalary(double salary)
{
    baseSalary = salary < 0.0 ? 0.0 : salary;
}

double BasePlusCommissionEmployee::getBaseSalary() const
{
    return baseSalary;
}

double BasePlusCommissionEmployee::earnings() const
{
    return getBaseSalary() + CommissionEmployee::earnings();
}

void BasePlusCommissionEmployee::print() const
{
    cout<<"\nbase-salaried commission employee: ";
    Employee::print();
}
