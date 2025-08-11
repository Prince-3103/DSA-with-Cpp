// 1 1 2 3 5 8 13 21...

#include<iostream>
using namespace std;
int fibbo(int n)
{
    int ans;
    int first = 1;
    int second = 1;
    if(n==1 || n==2)
    {
        return second;
    }
    for(int i=3; i<=n; i++)
    {
        ans = first + second;
        first = second;
        second = ans;
    }
    return ans;
}
int main()
{
    int n;
    cout<<"Enter the term you want: ";
    cin>>n;
    int term = fibbo(n);
    cout<<"The "<<n<<"th term is: "<<term;

}