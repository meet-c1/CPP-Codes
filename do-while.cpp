#include<iostream>
using namespace std;
int main(){
int n;
cout << "enter number for loop: ";
cin>>n;
do{
    if((n%5)==0){
        continue; // skip the rest of the loop if n is divisible by 5
    }
    cout<<n<<endl;
    n++;
}while(n<=20);

//return 0;

}