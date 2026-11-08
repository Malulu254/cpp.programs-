//NGUGI FRANCIS KARANJA
//CT101/G/26611/25

//This is a simple program that allows customers to withdraw money repeatedly until they choose to stop.



#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double balance, withdrawalAmount;

    // This is a simple C++ program for repeated money withdrawals.

    cout << "Enter your account balance (Ksh): ";

    if (!(cin >> balance) || balance < 0) {
        cout << "Invalid account balance. Enter a non-negative number." << endl;
        return 1;
    }

    cout << fixed << setprecision(2);

    while (balance > 0) {
        cout << "\nEnter withdrawal amount (Ksh): ";

        if (!(cin >> withdrawalAmount)) {
            cout << "Invalid input. Please enter a number." << endl;
            return 1;
        }

        // Reject zero or negative withdrawal amounts
        if (withdrawalAmount <= 0) {
            cout << "Invalid withdrawal. Enter an amount greater than zero." << endl;
            continue;
        }

        // Stop if the withdrawal exceeds the balance
        if (withdrawalAmount > balance) {
            cout << "Insufficient balance. Withdrawal stopped." << endl;
            break;
        }

        // Deduct the withdrawal amount
        balance = balance - withdrawalAmount;

        // Display the remaining balance
        cout << "Remaining balance: Ksh " << balance << endl;

        // Stop when the balance becomes zero
        if (balance == 0) {
            cout << "Your balance is zero. Withdrawal stopped." << endl;
            break;
        }
    }

    return 0;
}
