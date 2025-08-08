/*🧠 8. Pass or Fail with Nested if
 Ask for 3 subject marks. If all are above 33, print “Pass”. Else, print “Fail”.*/

#include <iostream>
using namespace std;
int main()
{
    int mark;
    cout << "enter marks ofperticular subject" << endl;

    int english, maths, science;
    cout << "enter english mark:- ";
    cin >> english;
    cout << "enter science mark:- ";
    cin >> science;
    cout << "enter maths mark:- ";
    cin >> maths;

    cout << "total mark :-" << maths + science + english << endl
         << "and";
    if ((maths + science + english) >= 33)
    {
        cout << " congratulation you are pass";
    }
    else
    {
        cout << " you'ar fail";
    }
    return 0;
}