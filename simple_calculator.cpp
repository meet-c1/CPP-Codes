/*🧠 Exercise 3: Simple Calculator
Input: Two numbers and an operator (+, -, *, /)
Output: Result of operation
Hint: Use if or switch (we’ll learn in Day 2, so try simple if for now)
*/
#include <iostream>
using namespace std;
int main()
{
    int choose, a, b;

    cout << "enter value for a:- ";
    cin >> a;
    cout << "enter value for b:- ";
    cin >> b;

    cout << "1. for sum" << endl;
    cout << "2. for substraction" << endl;
    cout << "3. for multiplication" << endl;
    cout << "4. for divison" << endl
         << endl;

    cout << "choose for one of this:- ";
    cin >> choose;

    switch (choose)
    {
    case 1:
        cout << "your sum is:- " << a + b << endl;
        break;
    case 2:
        cout << "your substraction is:- " << a - b << endl;
        break;
    case 3:
        cout << "your multiplication is:- " << a * b << endl;
        break;
    case 4:
        cout << "your divison is:- " << a / b << endl;
        break;
    default:
        cout << "you enter wrong number";
        break;
    }
    return 0;
}
