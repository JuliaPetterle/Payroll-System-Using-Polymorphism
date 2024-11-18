/******************************************************************************
Payroll System Using Polymorphism
*******************************************************************************/
#include <iostream>
using std::cout;
using std::endl;
using std::fixed;

#include <iomanip>

using std::setprecision;

#include <vector>

using std::vector;

#include <typeinfo>

#include "employee.h"
#include "salaried.h"
#include "commission.h"
#include "baseplus.h"
#include "hourly.h"

int main()
{
    cout<< fixed << setprecision(2);
    
    // create vector employees
    vector <Employee*> employees(4);
    
    // initialize vector with employees
    employees[0] = new SalariedEmployee("John", "Smith", "111-11-1111", 800.00);
    
    employees[1] = new CommissionEmployee("Sue", "Jones", "222-22-2222", 10000, .06);
    
    employees[2] = new BasePlusCommissionEmployee("Bob", "Lewis", "333-33-3333",
        300, 5000, .04);
        
    employees[3] = new HourlyEmployee("Karen", "Price", "444-44-4444", 16.75, 40);
    
    for(int i = 0; i < employees.size(); i++){
        // output each employee information
        employees[i]->print();
        
        // downcast pointer
        BasePlusCommissionEmployee * commissionPtr = 
            dynamic_cast <BasePlusCommissionEmployee*> (employees[i]);
            
        // determine whether element points to base-salaried
        // commission employee
        if(commissionPtr != 0) {
            cout<<"old base salary: $"
                << commissionPtr->getBaseSalary() << endl;
            commissionPtr->setBaseSalary(1.10 * commissionPtr->getBaseSalary());
            
            cout<<"new base salary with 10% increase is: $"
                <<commissionPtr->getBaseSalary() << endl;
        } // end if
        
        cout << "earned $" << employees[i]->earnings() << endl;
        
    } // end for
    
    for (int j = 0; j < employees.size(); j++){
        
        // output class name
        cout << "\ndeleting object of "
             <<typeid( *employees[j] ).name();
        
        // Typeid returns a type_info object.
        // This object contains information about the operand,
        // including its name.
        
        
        delete employees[j];
        
    } // end for
    
    cout<<endl;

    return 0;
}
