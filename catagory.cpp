/*🧠 9. Age Category
Take age and print:

0–12 → Child

13–19 → Teen

20–59 → Adult

60+ → Senior Citizen*/

#include <iostream>
using namespace std;
int main()
{
    int age;
    cout << "enter your age:- ";
    cin >> age;
    if (age < 0)
    {
        cout << "Invalid age entered.\n";
    }
    else if (age >= 0 && age <= 12)
    {
        cout << "you'er child";
    }
    else if (age >= 13 && age <= 19)
    {
        cout << "you'er teen";
    }
    else if (age >= 20 && age <= 59)
    {
        cout << "you'er adult";
    }
    else
    {
        cout << "you are a senior citizen";
    }
}