// Employee abstract base class
#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>

using std::string;

class Employee {
    
public:
    Employee( const string &, const string &, const string &);
    
    void setFirstName(const string &);
    string getFirstName() const;
    
    void setLastName(const string &);
    string getLastName() const;
    
    void setSocialSecurityNum(const string &);
    string getSocialSecurityNum() const;
    
    // pure virtual function makes Employee abstract base class
    virtual double earnings() const = 0;  // pure virtual
    virtual void print() const;           // virtual
    
private:
    string firstName;
    string lastName;
    string socialSecurityNum;
};

#endif
