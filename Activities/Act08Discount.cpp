/*+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
A small store records its total sales for each day of the week. Write a C++ program 
that asks the user to enter the day number and the total sales amount for that day.

The program should determine whether the day is a weekday or weekend using the OR 
operator (||). The store gives a different commission rate depending on the type of day:
    Monday to Friday: 5% commission
    Saturday or Sunday: 8% commission
    Invalid day: Display "Invalid Day"
The program should calculate and display the commission and the remaining sales 
after commission.
    Input
        Day number (1–7)
        Total sales amount
    Output
    Display:
        Day type
        Commission
        Remaining sales

+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/

#include<iostream>
#include<iomanip>

using namespace std;

int main() { 

    //declare variables
    int dayNum = 0;
    float daySale = 0.0, commission = 0.0, remainSale = 0.0;

    //input
    cout << "Enter Day Number: ";
    cin >> dayNum;

    cout << "Enter total Sales: ";
    cin >> daySale;

    cout<<fixed<<(setprecision(2));
    if (dayNum == 1 || dayNum == 2 || dayNum == 3 || dayNum == 4 || dayNum == 5) {
        commission = daySale * 0.05;
        remainSale = daySale - commission;
        cout << "Day Type: Weekday" << endl;
        cout << "Commission: " << commission<< endl;
        cout << "Remaining Sales: " << remainSale;
    }
    else if (dayNum == 6 || dayNum == 7) {
        commission = daySale * 0.08;
        remainSale = daySale - commission;
        cout << "Day Type: Weekend" << endl;
        cout << "Commission: " << commission << endl;
        cout << "Remaining Sales: " << remainSale;
    }
    else {
        cout << "Invalid Day!";
    }
    
    return 0;
}