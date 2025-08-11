// n=3
// *
// **
// ***

#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cout<<"Enter the number of rows: ";
    cin>>n;
    i=1;
    while(i<=n)
    {
        j=1;
        while(j<=i)
        {
            cout<<"*";
            j++;
        }
        i++;
        cout<<endl;
    }
}