#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter the alphabate: ";
    cin>>ch;
    int n = (int)ch;
    
    if(n>=65 && n<=95)
    {
        cout<<"Alpahabate is uppercase";
    }
    else if(n>=97 && n<=122)
    {
        cout<<"Alphabate is lowercase";
    }
    else 
    {
        cout<<"This is the symbol.";
    }
}