/*🧠 Exercise 4: Convert Temperature
Convert temperature from Celsius to Fahrenheit
Formula: F = (C × 9/5) + 32
Input: Temperature in Celsius
Output: Fahrenheit value*/

#include<iostream>
using namespace std;
int main()
{
    int c,f; 
    cout<<"enter temperature in celsius:- ";
    cin>>c;

    f=(c*9/5)+32;
    cout<<"the temperature is "<<c;
    cout<<"and the fahrenehit is "<<f;

}