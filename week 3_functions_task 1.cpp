//NGUGI FRANCIS KARANJA 
//CT101/G/26611/25

// This is a simple C++ program that calculates an employee'sovertime pay and net salary.


#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

// Function declarations
void getEmployeeDetails(string &name, double &basicSalary,
                        double &overtimeHours, double &ratePerHour);

double calculateOvertimePay(double overtimeHours,
                            double ratePerHour);

double calculateNetSalary(double basicSalary, double overtimePay);

void displayPayslip(string name, double basicSalary,
                    double overtimeHours, double ratePerHour,
                    double overtimePay, double netSalary);

int main() {
    string employeeName;
    double basicSalary, overtimeHours, ratePerHour;
    double overtimePay, netSalary;

    // Call functions in a logical sequence
    getEmployeeDetails(employeeName, basicSalary,
                       overtimeHours, ratePerHour);

    overtimePay = calculateOvertimePay(overtimeHours, ratePerHour);

    netSalary = calculateNetSalary(basicSalary, overtimePay);

    displayPayslip(employeeName, basicSalary, overtimeHours,
                   ratePerHour, overtimePay, netSalary);

    return 0;
}

// Function to enter employee details
void getEmployeeDetails(string &name, double &basicSalary,
                        double &overtimeHours, double &ratePerHour) {
    cout << "Enter employee name: ";
    getline(cin, name);

    cout << "Enter basic salary (Ksh): ";
    cin >> basicSalary;

    cout << "Enter overtime hours: ";
    cin >> overtimeHours;

    cout << "Enter overtime rate per hour (Ksh): ";
    cin >> ratePerHour;
}

// Function to calculate overtime pay
double calculateOvertimePay(double overtimeHours,
                            double ratePerHour) {
    return overtimeHours * ratePerHour;
}

// Function to calculate net salary
double calculateNetSalary(double basicSalary, double overtimePay) {
    return basicSalary + overtimePay;
}

// Function to display the payslip
void displayPayslip(string name, double basicSalary,
                    double overtimeHours, double ratePerHour,
                    double overtimePay, double netSalary) {
    cout << fixed << setprecision(2);

    cout << "\n====================================\n";
    cout << "          EMPLOYEE PAYSLIP\n";
    cout << "====================================\n";
    cout << "Employee Name:      " << name << endl;
    cout << "Basic Salary:       Ksh " << basicSalary << endl;
    cout << "Overtime Hours:     " << overtimeHours << endl;
    cout << "Rate Per Hour:      Ksh " << ratePerHour << endl;
    cout << "Overtime Pay:       Ksh " << overtimePay << endl;
    cout << "------------------------------------\n";
    cout << "Net Salary:         Ksh " << netSalary << endl;
    cout << "====================================\n";
}

