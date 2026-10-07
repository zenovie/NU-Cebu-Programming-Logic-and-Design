/*+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Create a C++ program that asks the user to enter a year.
If the year is divisible by 4 but not by 100, or divisible by 400, display "__  is a 
leap year."
Otherwise, display " __  is not a leap year."
+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/

#include<iostream>

using namespace std;

int main() {

    //declare variables
    int year = 0;

    //input
    cout << "Enter a Year: ";
    cin >> year;

    //process and output
    if (year % 4 == 0 && year % 100 !=0) {
        cout << year << " is a leap year.";
    } 
    else if (year % 400 == 0) {
        cout << year << " is a leap year";
    }
    else {
        cout << year << " is not a leap year.";
    }
    

    return 0;
}