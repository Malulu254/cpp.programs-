//NGUGI FRANCIS KARANJA
//CT101/G/26611/25

//This is a simple program that keep asking for the username and password until the correct credentials are entered.


#include <iostream>
#include <string>
using namespace std;

int main() {
    // Predefined username and password
    string correctUsername = "admin";
    string correctPassword = "12345";

    string username, password;

    do {
        cout << "Enter username: ";
        cin >> username;

        cout << "Enter password: ";
        cin >> password;

        if (username == correctUsername &&
            password == correctPassword) {
            cout << "Access Granted" << endl;
        } else {
        cout << "Incorrect credentials, try again" << endl;
        }

    } while (username != correctUsername ||
            password != correctPassword);

    return 0;
}
