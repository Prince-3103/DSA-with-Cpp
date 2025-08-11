#include<iostream>
using namespace std;
bool key(int arr[], int n, int find)
{
    for(int i=0; i<n; i++)
    {
        if(find==arr[i])
        {
            return 1;    //True
        }
    }
    return 0; //False

}
int main()
{
    int n,find;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cout<<"Enter the value of "<<i<<"th element: ";
        cin>>arr[i];
    }
    cout<<"\nThe array \n";
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\n\nEnter number to find in array: ";
    cin>>find;
    bool found=key(arr, n, find);
    if(found)
    {
        cout<<"The number is present";
    }
    else{
        cout<<find<<" is not present in array.";
    }
}