/*+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Write a C++ program that acts as a simple tax calculator. The program should:
1. Ask the user to input their annual income.
2. Based on the income, calculate the tax to be paid using the following rules:
    0 – 250,000 → No tax
    250,001 – 400,000 → 10% of the excess over 250,000
    400,001 – 800,000 → 15% of the excess over 400,000 + 15,000
    800,001 – 2,000,000 → 20% of the excess over 800,000 + 75,000
    2,000,001 – 8,000,000 → 25% of the excess over 2,000,000 + 335,000
    Above 8,000,000 → 30% of the excess over 8,000,000 + 2,195,000
3. Display the total tax payable.
4. If the user enters a negative income, display: "Invalid income entered."
+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/

#include<iostream>
#include<iomanip>

using namespace std;

int main () {

    //declare variables
    float annualIncome = 0.0, excess = 0.0, totalTax = 0.0;

    //input
    cout << "Enter annual income: ";
    cin >> annualIncome;

    cout<<fixed<<(setprecision(2));
    if (annualIncome < 0) {
        cout << "Invalid income entered.";
    }
    else if (annualIncome <= 250000) {
        cout << "Total Tax Payable: No Tax.";
    }
    else if (annualIncome <= 400000) {
        excess = annualIncome - 250000;
        totalTax = excess * 0.10;
        cout << "Total Tax Payable: " << totalTax;
    }
    else if (annualIncome <= 800000) {
        excess = annualIncome - 400000;
        totalTax = (excess * 0.15) + 15000;
        cout << "Total Tax Payable: " << totalTax;
    }
    else if (annualIncome <= 2000000) {
        excess = annualIncome - 800000;
        totalTax = (excess * 0.20) + 75000;
        cout << "Total Tax Payable: " << totalTax;
    }
    else if (annualIncome <= 8000000) {
        excess = annualIncome - 2000000;
        totalTax = (excess * 0.25) + 335000;
        cout << "Total Tax Payable: " << totalTax;
    }
    else {
        excess = annualIncome - 8000000;
        totalTax = (excess * 0.30) + 2195000;
        cout << "Total Tax Payable: " << totalTax;
    }

    return 0;
}