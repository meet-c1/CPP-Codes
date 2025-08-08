 /*🧠 Practice Problem: Student Marks Average Calculator
 📝 Problem Statement:
 Write a C++ program that:

 Takes marks of 3 subjects as float input from the user.

 Uses a function to calculate the total marks.

 Uses another function to calculate the average marks (return float with 2 decimal places).

 Finally, displays:
 Total Marks

 Average Marks
A message:

 "Excellent" if average ≥ 90
 "Good" if average ≥ 75

 "Pass" if average ≥ 35
  "Fail" if average < 35

 🎯 Requirements:
 Use 2 functions:
 float calculateTotal(float, float, float)
 float calculateAverage(float total)

Use setprecision(2) for float 


#include <iostream>
#include <iomanip> // required for setprecision
using namespace std;
float calculate(float a,float b,float c){
    cout<<"the total mark of three subject is :- "<<a+b+c<<endl;
    return (a+b+c)/2;
}

int main(){ 

    float maths,science,english;

    cout<<"enter value for maths:- ";
    cin>>maths;
    cout<<"enter value for science:- ";
    cin>>science;
    cout<<"enter value for english:- ";
    cin>>english;

    float result= calculate(maths,science,english);

    cout<<fixed<<setprecision(2)<<" your avarage is :- "<<result<<" ,";

    if((science+maths+english)/2>=90 && (science+maths+english)/2>75){
        cout<<"excelent";
    }
    else if((science+maths+english)/2>=75 && (science+maths+english)/2>=50)
    {
        cout<<"good";
    }
    else if((science+maths+english)/2>=35)
    {
        cout<<"pass";
    }else
    {
        cout<<"fail";
    } 

    return 0;
}*/
#include <iostream>
#include <iomanip>
using namespace std;

float calculate(float a, float b, float c) {
    float total = a + b + c;
    cout << "The total marks of three subjects is: " << total << endl;
    return total / 3; // Correct average
}

int main() {
    float maths, science, english;

    cout << "Enter value for Maths: ";
    cin >> maths;
    cout << "Enter value for Science: ";
    cin >> science;
    cout << "Enter value for English: ";
    cin >> english;

    float result = calculate(maths, science, english);

    cout << fixed << setprecision(2) << "Your average is: " << result << " , ";

    if (result >= 90) {
        cout << "Excellent";
    } else if (result >= 75) {
        cout << "Good";
    } else if (result >= 35) {
        cout << "Pass";
    } else {
        cout << "Fail";
    }

    return 0;
}
