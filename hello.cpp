/*

#include <iostream>
using namespace std;
int main()
{
    int i, n;
    cout << "enter any number for table:- ";
    cin >> n;
 for (int j = 1; j <= n; j++) {
    for (int i = 1; i <= 10; i++) {
        cout << j << " * " << i << " = " << j * i << endl;
    }
    cout << endl; // print a blank line after each table
}
    return 0;
}

*/
#include <iostream>
using namespace std;
int main(){
    int i, j, n;

    cout << "Enter the value of n: ";
    cin >> n;

    for (int i = n; i >= 1; i--)
    {
        for (int j = n; j >= i; j--)
        {
            cout << "* ";
        }
        cout << "\n";
    }

    cout << endl;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << "\n";
    }

    return 0;
}
