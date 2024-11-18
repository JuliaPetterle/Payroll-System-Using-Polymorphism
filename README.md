# Payroll-System-Using-Polymorphism

# Description:
This project is a Payroll System implemented in C++, designed to demonstrate the use of polymorphism in object-oriented programming. The system manages employee payroll by handling various employee types (e.g., hourly, salaried, commission-based) and calculating their payments based on their unique payment structures.

The program leverages polymorphism to create an extensible and reusable design. By defining a base Employee class and overriding functions in derived classes (e.g., HourlyEmployee, SalariedEmployee, CommissionEmployee), it simplifies code management while ensuring flexibility for adding new employee types in the future.

# What is Polymorphism?
Polymorphism is a key concept in object-oriented programming (OOP) that allows methods or functions to behave differently based on the object they are called on. In this project, polymorphism enables the payroll system to process different employee types using a common interface.

# Features
Implements a base Employee class and derived classes:
HourlyEmployee: Calculates pay based on hours worked and hourly wage.
SalariedEmployee: Provides a fixed weekly salary.
CommissionEmployee: Computes pay based on sales and commission percentage.
BasePlusCommissionEmployee: Extends CommissionEmployee by adding a base salary.
Polymorphic behavior for calculating pay using overridden methods.
Error handling and input validation for payroll data.

# Files
employee.h & employee.cpp: Base Employee class definitions and implementations.
hourly.h & hourly.cpp: Definitions and implementations for hourly employees.
salaried.h & salaried.cpp: Definitions and implementations for salaried employees.
commission.h & commission.cpp: Definitions and implementations for commission-based employees.
baseplus.h & baseplus.cpp: Extends the commission model to include a base salary.
main.cpp: Driver program demonstrating polymorphism by processing various employee types.

<h2>How to Run</h2>
    <ol>
        <li>Clone this repository:
            <pre>git clone https://github.com/JuliaPetterle/PayrollSystemUsingPolymorphism.git</pre>
            <cd PayrollSystemUsingPolymorphism</pre>
        </li>
        <li>Compile the code using a C++ compiler:
            <pre>g++ -o payroll main.cpp employee.cpp hourly.cpp salaried.cpp commission.cpp baseplus.cpp</pre>
        </li>
        <li>Run the program:
            <pre>./payroll</pre>
        </li>
    </ol>
