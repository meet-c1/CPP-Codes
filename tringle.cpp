#include <iostream>
using namespace std;
int main()
{
    int row, space, star, n = 5;
    cout << "ENTER VALUE FOR N:- ";
    cin >> n;
    for (row = 1; row <= n; row++)
    {

        for (space = 1; space <= n - row; space++)
        {
            cout << " ";
        }
        for (star = 1; star <= row; star++)
        {
             char latter = 'A' + star- 1;
            cout << latter << " ";
        }
        cout << endl;
    }

    for (row = n - 1; row >= 1; row--)
    {
        for (space = 1; space <= n - row; space++)
        {
            cout << " ";
        }
        for (star = 1; star <= row; star++)
        {
            char latter = 'A' + star - 1;
            cout << latter << " ";
        }
        cout << endl;
    }
    return 0;
}

