/*+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Write a C++ program that calculates an employee's annual bonus based on their years 
of service, performance rating, and monthly salary.The program should ask the user 
to enter the employee's years of service, performance rating, and monthly salary.
The bonus should be calculated using the following rules:
    High Bonus – if the employee has at least 5 years of service and a performance 
    rating of 90 or higher. The bonus is 20% of the annual salary.
    Medium Bonus – if the employee has at least 3 years of service and a performance 
    rating between 80 and 89. The bonus is 15% of the annual salary.
    Low Bonus – if the employee has at least 1 year of service and a performance 
    rating between 75 and 79. The bonus is 10% of the annual salary.
    No Bonus – if the employee does not meet any of the conditions. The bonus is ₱0.00.
The program should calculate:
    Annual Salary = Monthly Salary × 12
    Bonus Amount = Annual Salary × Bonus Rate
    Total Annual Income = Annual Salary + Bonus Amount
    Display the employee's bonus category, annual salary, bonus amount, and total 
    annual income.
+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/

#include<iostream>
#include<iomanip>

using namespace std;

int main() {

    //declare variables
    int yearService = 0, performRate = 0;
    float monthlySalary = 0.0, annualSalary = 0.0, bonusAmount = 0.0, totalAnnual = 0.0;
    
    //input
    cout << "Enter Years of Service: ";
    cin >> yearService;

    cout << "Enter Performace Rating: ";
    cin >> performRate;

    cout << "Enter Monthly Salary: ";
    cin >> monthlySalary;

    //calculate
    annualSalary = monthlySalary * 12;

    if (yearService >= 5 && performRate >= 90){
        bonusAmount = annualSalary * 0.20;
        cout << "Bonus Category: High Bonus" << endl;
    }
    else if (yearService >= 3 && performRate >= 80 && performRate <= 89){
        bonusAmount = annualSalary * 0.15;
        cout << "Bonus Category: Medium Bonus" << endl;
    }
    else if (yearService >= 1 && performRate >= 75 && performRate <= 79){
        bonusAmount = annualSalary * 0.10;
        cout << "Bonus Category: Low Bonus" << endl;
    }
    else {
        bonusAmount = 0.0;
        cout << "Bonus Category: No Bonus" << endl;
    }
    
    //calculate total annual
    totalAnnual = annualSalary + bonusAmount;

    //output the same variables
    cout<<fixed<<(setprecision(2));
    cout << "Annual Salary: " << annualSalary << endl;
    cout << "Bonus Amount: " << bonusAmount << endl;
    cout << "Total Annual Income: " << totalAnnual << endl;

    return 0;
}