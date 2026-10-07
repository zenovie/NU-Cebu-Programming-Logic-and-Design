/*+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Create a menu-driven restaurant ordering system:
===== RESTAURANT MENU =====
1. Burger       ₱80
2. Pizza        ₱150
3. Pasta        ₱120
4. Soft Drink   ₱50
5. View Total
6. Checkout
7. Exit
When the user selects an item, ask for the quantity.
Calculate:	Item Cost = Price × Quantity
When the user chooses Checkout, calculate:
Subtotal
12% Tax
Final Total
Use a do...while loop so that customers can order multiple items.
+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/

#include<iostream>
#include<iomanip>

using namespace std;

int main() {

    //declare variable
    int userChoice = 0, choiceQuant = 0;
    float total = 0.0, tax = 0.0, finalTotal = 0.0, subtotal = 0.0;
    ;

    //input & do while
    do {
        cout << "===== RESTAURANT MENU =====" << endl;
        cout << "1. Burger          -80" << endl;
        cout << "2. Pizza           -150" << endl;
        cout << "3. Pasta           -120" << endl;
        cout << "4. Soft Drinks     -50" << endl;
        cout << "5. View Total" << endl;
        cout << "6. Checkout" << endl;
        cout << "7. Exit" << endl;
        
        cout << "\nEnter your choice: ";
        cin >> userChoice;

        if (userChoice < 1 || userChoice > 7) {
            cout << "Invalid Choice!" << endl << endl;
        }
        else if (userChoice == 1) {
            do {
                cout << "Enter Quantity: ";
                cin >> choiceQuant;

                if (choiceQuant < 0) {
                    cout << "Invalid Quantity!" << endl;
                }
            }
            while (choiceQuant < 0);

            //calculate burger price
            subtotal = 80 * choiceQuant;
            total += subtotal;
            cout << "Burger added to your order." << endl << endl;
        }
        else if (userChoice == 2) {
            do {
                cout << "Enter Quantity: ";
                cin >> choiceQuant;

                if (choiceQuant < 0) {
                    cout << "Invalid Quantity!" << endl;
                }
            }
            while (choiceQuant < 0);

            //calculate pizza price
            subtotal = 150 * choiceQuant;
            total += subtotal;
            cout << "Pizza added to your order." << endl << endl;
        }
        else if (userChoice == 3) {
            do {
                cout << "Enter Quantity: ";
                cin >> choiceQuant;

                if (choiceQuant < 0) {
                    cout << "Invalid Quantity!" << endl;
                }
            }
            while (choiceQuant < 0);

            //calculate pasta price
            subtotal = 120 * choiceQuant;
            total += subtotal;
            cout << "Pasta added to your oder." << endl << endl;
        }
        else if (userChoice == 4) {
            do {
                cout << "Enter Quantity: ";
                cin >> choiceQuant;

                if (choiceQuant < 0) {
                    cout << "Invalid Quantity!" << endl;
                }
            }
            while (choiceQuant < 0);

            //calculate soda price
            subtotal = 50 * choiceQuant;
            total += subtotal;
            cout << "Soft Drink added to your order." << endl << endl;
        }
        else if (userChoice == 5) {
            cout<<fixed<<(setprecision(2));
            cout << "\nCurrent Subtotal: " << total << endl << endl;

        }
        else if (userChoice == 6) {
            //calculate tax and total
            tax = total * 0.12;
            finalTotal = total + tax;

            cout<<fixed<<(setprecision(2));
            cout << "\n===== CHECKOUT =====" << endl;
            cout << "Subtotal: " << total << endl;
            cout << "Tax (12%): " << tax << endl;
            cout << "Total Amount: " << finalTotal << endl;

            cout << "\nTHANK YOU FOR YOUR ORDER!" << endl << endl;
        }
        else {
            cout << "Exit" << endl << endl;
        }
    }
    while (userChoice != 7);
    
    return 0;
}