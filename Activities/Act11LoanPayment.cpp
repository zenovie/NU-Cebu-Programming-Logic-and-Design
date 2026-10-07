/*+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Create a program that asks the user for:
Loan amount
Monthly payment
Using a while loop, repeatedly subtract the monthly payment from the remaining 
loan balance.
For each month, display the remaining balance.
At the end, display the number of months needed to completely pay the loan and the 
total amount paid.
+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/

#include<iostream>
#include<iomanip>

using namespace std;

int main() {

    //declare variables
    float loanAmount = 0.0, monthlyPay = 0.0, totalAmount = 0.0, remainBalance = 0.0;
    int count = 0;

    //input
    cout << "===== LOAN PAYMENT CALCULATOR =====" << endl;

    cout << "Enter Loan Amount: ";
    cin >> loanAmount;

    cout << "Enter Monthly Pay: ";
    cin >> monthlyPay;

    //while process
    cout<<fixed<<(setprecision(2));
    while (loanAmount > 0) {
        loanAmount -= monthlyPay;
        count++;
        cout << "Payment " << count << ": Remaining Balance = P" << loanAmount << endl;
    }

    //calculate
    totalAmount = monthlyPay * count;

    //output
    cout << "\n\n===== LOAN SUMMARY =====" << endl;
    cout << "Number of Payments: " << count << endl;
    cout << "Total Amount Paid: P" << totalAmount << endl;
    cout << "Remaining Balance: P" << loanAmount << endl;

    return 0;
}