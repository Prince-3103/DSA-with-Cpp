#include<iostream>
using namespace std;

int main()
{
    int n,sum=0;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    for(int i =0; i<n; i++)
    {
        cout<<"Enter the value of "<<i<<"th index: ";
        cin>>arr[i];
    }
    cout<<"The array "<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
        sum = sum + arr[i];
    }
    cout<<endl<<"The sum of array is: "<<sum;
}