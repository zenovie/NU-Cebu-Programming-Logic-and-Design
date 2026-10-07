/*+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Write a C++ program that asks the user to enter the total amount of their purchase.
if the amount is 1,000 or more, display "Free Delivery." Otherwise, display "Delivery
fee applies."
+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/

#include<iostream>

using namespace std;

int main() {

    //declare variables
    float totalPurchase = 0.0;

    //input
    cout << "Enter the total purchase amount: ";
    cin >> totalPurchase;

    //process and output
    if (totalPurchase >= 1000) {
        cout << "Free Delivery.";
    }
    else {
        cout << "Delivery Fee Applies.";
    }

    return 0;
}