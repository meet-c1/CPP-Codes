/*🧠 4. Vowel or Consonant
Input a character and check if it’s a vowel (a, e, i, o, u) or consonant.*/

#include <iostream>
using namespace std;
int main(){
    char alpha;
    cout<<"enter any one alphabet between a to z :- ";
    cin>>alpha;
    if(alpha=='a'||alpha=='e'||alpha=='i'||alpha=='o'||alpha=='u')
    {
        cout<<"this is vowel";
    }else{
        cout<<"this is a consonant";
    }
    return 0;
}