// NGUGI FRANCIS KARANJA 
// CT101/G/26611/25

//This is a simple program tha calculate Employee's bonus and total salary and display a report 

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    string employeeName;
    double basicSalary, bonusPercentage, bonusAmount, totalSalary;

    //Set output to 2 decimal places
    cout << fixed << setprecision(2);

    //loop to input details for 5 employees
    for (int i = 1; i <= 5; ++i) {
        cout << "\nEnter details for employee " << i << ": " << endl;
       
        cout << "Enter employee name: ";
        getline(cin, employeeName);

        cout << "Enter basic salary : Ksh ";
        cin >> basicSalary;

        //Calculate bonusAmount  
        bonusAmount= 0.05*basicSalary;

        //Calculate total salary
        totalSalary = basicSalary + bonusAmount;

        //Display report
        cout << "\n=========Employee Salary Report==========" << endl;
        cout << "Employee Name: " << employeeName << endl;
        cout << "Basic Salary: Ksh " << basicSalary << endl;
        cout << "Bonus : Ksh " << bonusAmount  << endl;
        cout << "Total Salary: Ksh " << totalSalary << endl;
        cout << "=========================================" << endl;
    }
    return 0;
}