//NGUGI FRANCIS KARANJA 
//CT101/G/26611/25

// This is a simple program to assign grades to students based on their marks.

#include <iostream>
#include <string>
using namespace std;

int main (){
    string studentName;
    double marks;
    char grade;

    //Enter student details
    cout<<"Enter the studen name: ";
    getline(cin, studentName);

    cout<<"Enter exam marks: ";
    cin>>marks;

    //assign grades using if-else ladder
    if (marks >= 70 && marks <= 100 ){
        grade = 'A';
    } else if (marks >= 60 && marks < 70){
        grade = 'B';
    } else if (marks >= 50 && marks < 60){
        grade = 'C';
    } else if (marks >= 40 && marks < 50){
        grade = 'D';
    } else if (marks >= 0 && marks < 40){
        grade = 'E';
    } else {
        cout<<"Invalid marks entered"<<endl;

        return 0;
}

    //display student results
    cout<<"\n---Student Results---\n";
    cout<<"Student Name: "<<studentName<<endl;
    cout<<"Exam Marks: "<<marks<<endl;
    cout<<"Grade: "<<grade<<endl;

    return 0;
}