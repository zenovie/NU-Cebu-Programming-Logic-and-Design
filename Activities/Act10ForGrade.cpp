/*+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Create a program that asks the user to enter the scores of 5 subjects. 
Use a for loop to accept the scores and calculate the total and average.
After calculating the average:
    If average is 90 or above, display "Excellent".
    If average is 80–89, display "Very Good".
    If average is 75–79, display "Good".
Otherwise, display "Failed".
Input: 5 subject scores
 Loop: for loop for 5 subjects
 Computation: Total and average
 Condition: Average
 Output: Total, average, and remark
+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/

#include<iostream>
#include<iomanip>

using namespace std;

int main () {

    //declare variables
    float score = 0.0, total = 0.0, average = 0.0;

    //input
    for (int i = 1; i <=5; i++) {
        cout << "Enter Score for Subject " << i << ": ";
        cin >> score;

        total += score;
    }

    //calculate
    average = total / 5;

    //output
    cout<<fixed<<(setprecision(2));
    cout << "Total Score: " << total << endl;
    cout << "Average: " << average << endl;
    if (average >= 90) {
        cout << "Remark: Excellent";
    }
    else if (average >= 80 && average <= 89) {
        cout << "Remark: Very Good"; 
    }
    else if (average >= 75 && average <= 79) {
        cout << "Remark: Good";
    }
    else {
        cout << "Remark: Failed";
    }

    return 0;
}