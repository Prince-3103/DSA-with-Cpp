#include<iostream>
using namespace std;
int main()
{
    int n,nst,i,j;
    cout<<"Enter the number of rows: ";
    cin>>n;
    nst=0;
    for(i=0; i<n; i++)
    {
        for(j=1; j<=n-i; j++)
        {
            cout<<j;
        }
        for(j=1; j<=nst; j++)
        {
            cout<<"*";
        }
        for(j=n-i; j>=1; j--)
        {
            cout<<j;
        }
        cout<<endl;
        nst = nst + 2;

    }
}