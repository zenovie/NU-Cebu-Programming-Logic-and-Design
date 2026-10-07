/*+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
A bank wants to estimate the total repayment of a loan. Ask the user to enter the 
loan amount, annual interest rate, loan processing fee, insurance fee, and loan term
in years. Compute the simple interest, total amount to be repaid, and the monthly 
payment.
+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/

#include<iostream>
#include<iomanip>

using namespace std;

int main () {

    //declare variables
    double loanAmount = 0.0, anInterestRate = 0.0, processFee = 0.0, insureFee = 0.0, termYear = 0.0;
    double simpleInterest = 0.0, totalRepay = 0.0, monthlyPay = 0.0;

    //input
    cout << "Enter Loan Amount              : ";
    cin >> loanAmount;

    cout << "Enter Annual Interest Rate (%) : ";
    cin >> anInterestRate;

    cout << "Enter Processing Fee           : ";
    cin >> processFee;

    cout << "Enter Insurance Fee            : ";
    cin >> insureFee;
    
    cout << "Enter Loan Term (Year)         : ";
    cin >> termYear;

    //compute
    simpleInterest = loanAmount * (anInterestRate / 100) * termYear;
    totalRepay = loanAmount + processFee + insureFee + simpleInterest;
    monthlyPay = totalRepay / (termYear * 12);

    //output
    cout<<fixed<<(setprecision(2));
    cout << "\n\nInterest: " << simpleInterest <<endl;
    cout << "Total Payment: " << totalRepay << endl;
    cout << "Monthly Payment: " << monthlyPay << endl;

    return 0;
}