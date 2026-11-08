// NGUGI FRANCIS KARANJA 
// CT101/G/26611/25

//This is a simple program for a water supply company

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

//Rate charge per unit of water 
const double RATE_PER_UNIT = 50.0;

//Function to input customer details 
void getCustomerDetails(string &customerName, double &unitsConsumed) {
    cout << "Enter customer name: ";
    getline(cin, customerName);

    cout << "Enter units of water consumed: ";
    cin >> unitsConsumed;
}

//Function to calculate the total bill
double calculateTotalBill(double units) {
    return units * RATE_PER_UNIT;
}

//Function to apply a 10% discount if units consumed exceed 100
double applyDiscount(double totalBill, double units) {
    if (units > 100) {
        return totalBill * 0.10;
    }else {
        return 0.0;
    }
}

//Function to display the water  bill
void displayBill(string name,double units,double bill,double discount) {
    double finalAmount = bill - discount;

    cout << fixed << setprecision(2);
    cout << "\n=========Monthly Water Bill ==========" << name << endl;
    cout << "Customer Name: " << name << endl;
    cout << "Units Consumed: " << units << endl;
    cout << "Rate per Unit: Ksh " << RATE_PER_UNIT << endl;
    cout << "Total Bill Before Discount: Ksh  " << bill << endl;
    cout << "Discount: Ksh" << discount << endl;
    cout << "Final Amount Payable: Ksh " << finalAmount << endl;
    cout << "======================================" << endl;
}
int main() {
    string customerName;
    double unitsConsumed, totalBill, discount;

    // Call functions in a logical sequence
    getCustomerDetails(customerName, unitsConsumed);

    totalBill = calculateTotalBill(unitsConsumed);

    discount = applyDiscount(totalBill, unitsConsumed);

    displayBill(customerName, unitsConsumed, totalBill, discount);

    return 0;
}