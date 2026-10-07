/*+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
A company wants a payroll program that computes an employee's salary details.
The program will ask for the employee's name, hourly wage, hours worked, overtime
hours, tax rate (percentage), and other deductions. Overtime paid is at 1.5 times 
the regular hourly wage. The  program should compute the regular pay, overtime pay, 
gross salary, tax amount, total deductions, and final net salary. Display all the 
information in a well-formatted payroll report
+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/

#include<iostream>
#include<string>

using namespace std;

int main () {
    //declare variables
    string employeeName;
    double hourlyWage = 0.0, hoursWorked = 0.0, otHours = 0.0, taxRate = 0.0, otherDeduce = 0.0;
    double regularPay = 0.0, otPay = 0.0, grossSalary = 0.0, taxAmount = 0.0, totalDeduce = 0.0, finalNet = 0.0;

    //input
    cout << "Enter Employee Name            : ";
    getline(cin, employeeName);

    cout << "Enter Hourly Wage              : ";
    cin >> hourlyWage;

    cout << "Enter Hours Worked             : ";
    cin >> hoursWorked;

    cout << "Enter Overtime Hours           : ";
    cin >> otHours;

    cout << "Enter Tax Rate (%}             : ";
    cin >> taxRate;
    
    cout << "Enter Other Deductions         : ";
    cin >> otherDeduce;

    //compute
    regularPay = hourlyWage * hoursWorked;
    otPay = hourlyWage * otHours * 1.5;
    grossSalary = regularPay + otPay;
    taxAmount = grossSalary * (taxRate / 100);
    totalDeduce = otherDeduce;
    finalNet = grossSalary - (taxAmount + totalDeduce);

    //output
    cout << "\n\n*****Payroll Report*****" << endl;
    cout << "Employee Name: " << employeeName << endl;
    cout << "Regular Pay: " << regularPay << endl;
    cout << "Overtime Pay: " << otPay << endl;
    cout << "Gross Salary: " << grossSalary << endl;
    cout << "Tax: " << taxAmount << endl;
    cout << "Other Deductions: " << totalDeduce << endl;
    cout << "Net Salary: " << finalNet << endl;

    return 0;
}
