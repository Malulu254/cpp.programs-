//NGUGI FRANCIS KARANJA
// CT101/G/26611/25

//This is a simple program for the mobile phone that captures the customer's details, calculates the total sales amount, and prints a formatted receipt.

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main (){
    string customerName, phoneModel;
    int quantity;
    double pricePerPhone, totalSalesAmount;

    //Enter customer and phone details 
    cout<<"Enter customer name: ";
    getline(cin,customerName);

    cout<<"Enter phone model purchased: ";
    getline(cin,phoneModel);

    cout<<"Enter quantity bought: ";
    cin>>quantity;

    cout<<"Enter price per phone: ";
    cin>>pricePerPhone;

    //calculate total sales amount 
    totalSalesAmount = quantity * pricePerPhone;

    //display customer receipt 
    cout << fixed << setprecision(2);
    cout << "\n====================================\n";
    cout << "    MOBILE PHONE SHOP RECEIPT\n";
    cout <<"Customer name:      " <<customerName<< '\n';
    cout <<"Phone model:        " <<phoneModel<< '\n';
    cout <<"Quantity bought:    " <<quantity<< '\n';
    cout <<"Price per phone:    " <<pricePerPhone<< '\n';
    cout <<"Total sales amount: " <<totalSalesAmount<< '\n';
    cout << "====================================\n";

    
    return 0;
}   







