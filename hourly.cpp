#include <iostream>

using std::cout;

#include "hourly.h"

HourlyEmployee::HourlyEmployee(const string &first, const string &last,
    const string &SSN, double wage_, double hours_)
    : Employee(first, last, SSN)
{
    setWage(wage_);
    setHours(hours_);
}

void HourlyEmployee::setWage(double wage_)
{
    wage = wage_ < 0.0 ? 0.0 : wage_;
}

void HourlyEmployee::setHours(double hours_)
{
    hours = (hours_ >= 0.0 && hours_ <= 168.0) ?
        hours_ : 0.0;
}

double HourlyEmployee::getHours() const
{
    return hours;
}

double HourlyEmployee::getWage() const
{
    return wage;
}

double HourlyEmployee::earnings() const
{
    if(hours<= 40)
        return wage * hours;
    else
        return 40 * wage; + (hours-40) * wage * 1.5;
}

void HourlyEmployee::print() const
{
    cout<<"\nhourly employee: ";
    Employee::print(); //code reuse
}
