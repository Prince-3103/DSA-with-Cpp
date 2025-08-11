#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number to check Prime or not Prime: ";
    cin>>n;
    int i, flag=0;
    for(i=2; i<=n/2; i++)
    {
        if(n%i==0)
        {
            flag=1;
            break;
        }

    }
    if(flag)
    {
        cout<<"The given number is Not Prime.";
    }
    else{
        cout<<"The given number is  Prime.";
    }
}