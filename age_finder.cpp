/*🧠 Exercise 9: Age in Months and Days
Input: Your age in years
Output: Age in months and days
Hint: Assume 1 year = 12 months, 365 days*/

#include <iostream>
using namespace std;
int main()
{
    int year, month, day;
    cout << "enter your age in years:- ";
    cin >> year;
    month = year * 12;
    day = year * 365;

    cout << "your age is " << year << " year," << month << " month and " << day << " day";
    return 0;
}