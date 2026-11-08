//NGUGI FRANCIS KARAMJA 
//CT101/G/26611/25

// This is a program for Rocky Driving School that records a student's marks, calculates the average, and displays whether the student has passed or failed.

#include <iostream>
#include <string>
using namespace std;

int main (){
    string studentName;
    double theoryMarks, practicalMarks, averageMarks;

    cout << "Enter the student's name: ";
    getline(cin, studentName);

    cout <<"Enter theory test marks: ";
    cin >> theoryMarks;
    
    cout <<"Enter practical test marks: ";
    cin >> practicalMarks;

    //Calculate average marks
    averageMarks = (theoryMarks + practicalMarks) / 2;

    //Display the student results
    cout <<"\n---Driving Test Results---\n";
    cout <<"Student Name: " << studentName << endl;
    cout <<"Theory Test Marks: " << theoryMarks << endl;
    cout <<"Practical Test Marks: " << practicalMarks << endl;
    cout <<"Average Marks: " << averageMarks << endl;

    //Determine if the student has passed or failed
    if (averageMarks >= 50) {
        cout <<"Result: Passed" << endl;
    } else {
        cout <<"Result: Failed" << endl;
    }


    return 0;
}