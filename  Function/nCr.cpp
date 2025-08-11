#include<iostream>
using namespace std;
int fact(int n)
{
    int fact = 1;
    for(int i=1; i<=n; i++)
    {
        fact = fact*i;
    }
    return fact;
}

int comb(int n, int r)
{
    int nume = fact(n);
    int deno = fact(r)*fact(n-r);
    int nCr = nume/deno;
    return nCr;
}

int main()
{
    int n,r;
    cout<<"Enter the value of n: ";
    cin>>n;
    cout<<"Enter the value of r: ";
    cin>>r;
    int combination = comb(n,r);
    cout<<"nCr = "<<combination;
}