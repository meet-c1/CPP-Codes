/*Greatest of Two Numbers
Take 2 numbers and print which one is greater.*/

#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "check the largest value." << endl;
    cout << "Enter value for a:- ";
    cin >> a;
    cout << "Enter value for b:- ";
    cin >> b;

    if (a <= b)
    {
        if (a < b)
            cout << "b is large then a." << endl;
        else
            cout << "a and b are same." << endl;
    }
    else
    {
        cout << "a is larger then b." << endl;
    }
    return 0;
}
