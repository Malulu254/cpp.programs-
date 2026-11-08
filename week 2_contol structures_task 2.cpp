//NGUGI FRANCIS KARANJA 
//CT101/G/26611/25

//This is a simple program that uses nested if statements to determine whether a student qualifies for admission to the college in Ruiru.


#include <iostream>
#include <string>
using namespace std;

int main() {
    string studentName;
    int age;
    double examScore;

    // Enter student details
    cout << "Enter student name: ";
    getline(cin, studentName);

    cout << "Enter student age: ";
    cin >> age;

    cout << "Enter exam score: ";
    cin >> examScore;

    // Determine admission using nested if statements
    cout << "\n===== ADMISSION RESULTS =====\n";
    cout << "Student Name: " << studentName << endl;

    if (age >= 18) {
        if (examScore >= 50) {
            cout << "Decision: Admitted" << endl;
        } else {
            cout << "Decision: Not Admitted: Low Score" << endl;
        }
    } else {
        cout << "Decision: Not Admitted: Underage" << endl;
    }

    cout << "=============================\n";

    return 0;
}
