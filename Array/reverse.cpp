#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    for(i=0; i<n; i++)
    {
        cout<<"Enter th value of "<<i<<"th index: ";
        cin>>arr[i];
    }
    cout<<"The array is: ";
    for(i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    //Reversing the array
    int end = n-1;
    int start = 0;
    while(start<end)
    {
       int temp;
       temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        end--;
        start++;
    }
    
    cout<<"\nThe Reverse of array is: ";
    for(i = 0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
}