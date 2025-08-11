#include<iostream>
using namespace std;
int main()
{
    int n,temp,rev=0;
    cout<<"Enter the number to reverse: ";
    cin>>n;
    
    while(n!=0)
    {
        temp = n%10;
        rev = rev*10 + temp;
        n = n/10;
    }
    cout<<"The Reverse number is: "<<rev;
    return 0;
}