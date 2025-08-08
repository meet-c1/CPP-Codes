#include<iostream>
using namespace std;
int main(){
    int i,j,num;
    cout<<"enter number for how many table you want?:- ";
    cin>>num;
    for(i=1;i<=num;i++){
        for(j=1;j<=10;j++){
            cout<<i<<" * "<<j<<" = "<<i*j<<endl;
        }
        cout<<"\n\n";
    }
    return 0;
}