/*🧠 Exercise 6: Greet User by Name
Input: Your name (string)
Output: Print Hello [name], Welcome to C++!
Hint: Use #include <string>*/

#include<iostream>
#include<string>
using namespace std;
int main()
{
    string name;
    cout<<"enter your full name:- ";
    cin>>name;
    // cin.ignore(); // If you want to ignore the newline character left in the input buffer
    // getline(cin, name); // To handle spaces in the name
    cout<<"hello "<< name <<", welcome to c++."<<endl;
    return 0;
}