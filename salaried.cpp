// SalariedEmployee class member-function definitions
#include <iostream>

using std::cout;

#include "salaried.h"

SalariedEmployee::SalariedEmployee(const string &first,
    const string &last, const string &SSN, double salary)
    : Employee(first, last, SSN) // use base class constructor for basic fields
{
    setWeeklySalary(salary);
}

void SalariedEmployee::setWeeklySalary(double salary)
{
    weeklySalary = salary < 0.0 ? 0.0 : salary;
}

// must implement pure virtual functions
double SalariedEmployee::earnings() const
{
    return getWeeklySalary();
}

double SalariedEmployee::getWeeklySalary() const
{
    return weeklySalary;
}

void SalariedEmployee::print() const
{
    cout<<"\nsalaried employee: ";
    Employee::print(); // code reuse
}
