/*🧠 3. Student Grade Checker
Take marks (0–100) and print grade:

90+ = A+

75–89 = A

60–74 = B

40–59 = C

<40 = Fail
*/

#include <iostream>
using namespace std;
int main()
{
    int mark;
    cout << "entet your mark between 0-100 :- ";
    cin >> mark;

    if (mark >= 90 && mark <= 100)
    {
        cout << "congratulation you get A+ grade" << endl;
    }
    else if (mark >= 75 && mark <= 89)
    {
        cout << "greate,you get A grade" << endl;
    }
    else if (mark >= 60 && mark <= 74)
    {
        cout << "good,you get B grade" << endl;
    }
    else if (mark >= 40 && mark <= 59)
    {
        cout << " you get c grade " << endl;
    }
    else if (mark <= 40)
    {
        cout << "ohh my friend you are fail please try again" << endl;
    }
    else
    {
        cout << "please enter sutaible mark";
    }

    return 0;
}