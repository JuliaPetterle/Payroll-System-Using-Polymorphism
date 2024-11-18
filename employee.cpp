// Abstract-base-class Employee member-function definitions
// Note: No definitions are given for pure virtual functions
#include <iostream>

using std::cout;
using std::endl;

#include "employee.h"

Employee::Employee( const string &first, const string &last,
    const string &SSN)
    : firstName(first),
      lastName(last),
      socialSecurityNum(SSN)
{
    //empty body
}

string Employee::getFirstName() const
{
    return firstName;
}

string Employee::getLastName() const
{
    return lastName;
}

string Employee::getSocialSecurityNum() const
{
    return socialSecurityNum;
}

void Employee::setFirstName(const string &first)
{
    firstName = first;
}

void Employee::setLastName(const string &last)
{
    lastName = last;
}

void Employee::setSocialSecurityNum(const string &number)
{
    socialSecurityNum = number;
}

// Default implementation for virtual function print
void Employee::print() const
{
    cout<< getFirstName() << ' '<< getLastName()
        <<"\nsocial security number: "
        <<getSocialSecurityNum()<<endl;
}
