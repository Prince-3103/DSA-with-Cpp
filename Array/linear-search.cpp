// #include<iostream>
// using namespace std;
// bool key(int arr[], int n, int find)
// {
//     for(int i=0; i<n; i++)
//     {
//         if(find==arr[i])
//         {
//             return 1;    //True
//         }
//     }
//     return 0; //False

// }
// int main()
// {
//     int n,find;
//     cout<<"Enter the size of array: ";
//     cin>>n;
//     int arr[n];
//     for(int i=0; i<n; i++)
//     {
//         cout<<"Enter the value of "<<i<<"th element: ";
//         cin>>arr[i];
//     }
//     cout<<"\nThe array \n";
//     for(int i=0; i<n; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     cout<<"\n\nEnter number to find in array: ";
//     cin>>find;
//     bool found=key(arr, n, find);
//     if(found)
//     {
//         cout<<"The number is present";
//     }
//     else{
//         cout<<find<<" is not present in array.";
//     }
// }

// Page number -> 1

#include<iostream>
using namespace std;

bool LinearSearch(int arr[], int size, int find){
    for(int i = 0; i<size; i++){
        if(arr[i] == find){
            return 1;
        }
    }
    return 0;
}

int main(){
    int n, find;
    cout<<"Enter the size of array: ";
    cin>>n;
    int a[n];

    cout<<"Enter the elements of array:"<<endl;
    for(int i = 0; i < n; i++){
        cin>>a[i];
    }

    cout<<"Your array:"<<endl;
    for(int i = 0; i < n; i++){
        cout<<a[i]<<" ";
    }

    cout<<endl<<"Enter number to find in array: ";
    cin>>find;

    bool isFind = LinearSearch(a, n, find);
    
    if(isFind){
        cout<<find<<" is in the array.";
    }
    else{
        cout<<find<<" is not in array.";
    }
}