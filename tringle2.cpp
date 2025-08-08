#include<iostream>
using namespace std;
int main(){
    int n,i,j,k;
    cout<<"enter number of line:- ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for (j=1;j<=n-i;j++)
        {
            cout<<" ";
        }
    for(k=1;k<=i;k++)
    {
        cout<<"* ";
    }
        cout<<"\n";
    }


       for(i=n-1;i>=1;i--)
    {
        for (j=1;j<=n-i;j++)
        {
            cout<<" ";
        }
        for(k=1;k<=i;k++)
    {
        cout<<"* ";
    }
        cout<<"\n";
    }
return 0;
}