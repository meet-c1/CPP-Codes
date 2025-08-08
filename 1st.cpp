#include<iostream>
#include <iomanip> // required for setprecision
using namespace std;
int sum(float a,float b,float c){
    cout<<"the sum of three number is :- ";
    return a+b+c;
}
int main(){
    float x,y,z;
    cout<<"enter value for number x:- ";
    cin>>x;
    cout<<"enter value for number y:- ";
    cin>>y;
    cout<<"enter value for number z:- ";
    cin>>z;
     
    float result = sum(x,y,z);// return the function value in result variable
    
    cout << fixed << setprecision(2) << result;// set precision to 2 decimal places
    return 0;
}