#include<iostream>
using namespace std;
int main()
{
    int a=20,b=10,c;
    cout<<"without swap"<<"number1 is "<<a<<" and number2 is "<<b<< endl;
   /* b=b+a;
    a=b-a;
    b=b-a;*/
    c=a;
    a=b;
    b=c;
    cout << "after swaping a=" << a << endl;
    cout<<"and b="<<b<<endl;
    return 0;
}