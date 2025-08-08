/*🧠 6. Check Leap Year
Take a year and check if it’s a leap year:

If divisible by 400 ✅

If divisible by 4 and not 100 ✅*/

#include <iostream>
using namespace std;
int main(){
    int year;
    cout<<"enter any year :- ";
    cin>>year;
    if ((year%4)==0)
    {
        cout<<"the year is leap year";
    }else
    cout<<"the year is not leap year";
    return 0;
}