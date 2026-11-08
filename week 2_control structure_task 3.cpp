//NGUGI FRANCIS KARANJA 
//CT101/G/26611/25

//This is a simple program for the electronics shop in Ruiru.


#include <iostream>
using namespace std;

int main() {
    double number1, number2, result;
    char op;

    // Enter two numbers and an operator
    cout << "Enter the first number: ";
    cin >> number1;

    cout << "Enter an operator (+, -, *, /): ";
    cin >> op;

    cout << "Enter the second number: ";
    cin >> number2;

    // Perform the selected operation
    switch (op) {
        case '+':
            result = number1 + number2;
            cout << "Result = " << result << endl;
            break;

        case '-':
            result = number1 - number2;
            cout << "Result = " << result << endl;
            break;

        case '*':
            result = number1 * number2;
            cout << "Result = " << result << endl;
            break;

        case '/':
            if (number2 != 0) {
                result = number1 / number2;
                cout << "Result = " << result << endl;
            } else {
                cout << "Error: Division by zero is not allowed."
                     << endl;
            }
            break;

        default:
            cout << "Invalid operator entered." << endl;
    }

    return 0;
}
