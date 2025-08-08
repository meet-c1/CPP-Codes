/*🧠 Exercise 10: Square and Cube
Input: One number
Output: Its square and cube
Hint: square = n * n, cube = n * n * n*/

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter any number for cube or squere:- ";
    cin >> n;

    cout << "the squere is :-" << n * n <<endl<< " and the cube is :-" << n * n * n;
    return 0;
}