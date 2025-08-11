// n=3
// 3 2 1 
// 3 2 1
// 3 2 1

#include<iostream>
using namespace std;
int main()
{
    int n,i=1,j;
    cout<<"Enter the number of row: ";
    cin>>n;
    while(i<=n)
    {
        j = 0;
        while(j<n)
        {
            cout<<n-j;
            j++;
        }
        i++;
        cout<<endl;
    }
}