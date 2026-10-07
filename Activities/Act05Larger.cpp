/*+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Write a C++ program that asks the user to enter two integers. Use an if-else statement
to determine which number is larger.
+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/

#include<iostream>

using namespace std;

int main() {

    //declare variables
    int num1 = 0;
    int num2 = 0;

    //input
    cout << "Enter First Number: ";
    cin >> num1;

    cout << "Enter Seconnd Number: ";
    cin >> num2;

    //process and output
    if (num1 > num2) {
        cout << num1 << " is larger.";
    }
    else {
        cout << num2 << " is larger.";
    }

    return 0;
}