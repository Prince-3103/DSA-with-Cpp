// // arr[4]={1,2,3,4}
// // arr[4]={2,1,4,3}

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n,i;
//     cout<<"Enter the size of array: ";
//     cin>>n;
//     int arr[n];
//     for(i=0; i<n; i++)
//     {
//         cout<<"Enter the value of "<<i<<"th index: ";
//         cin>>arr[i];
//     }
//     cout<<"The array is: ";
//     for(i=0; i<n; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     //swaping
//     for(i=0; i<n; i+=2)
//     {
//         if(i+1<n)
//         {
//             swap(arr[i],arr[i+1]);
//         }
//     }
//     cout<<"\nThe alternate array is: ";
//     for(i=0; i<n; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
    
// }

#include<iostream>
using namespace std;

void printArray(int a[], int size){
    for(int i = 0; i < size; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

void swaping(int a[], int size){

    for(int i = 0; i<size; i = i + 2){
        if((i+1) < size){
            swap(a[i], a[i+1]);
        }
    }
}

int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;

    int arr[n];
    cout<<"Enter the elements of array: ";
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }

    cout<<"Array is:"<<endl;
    printArray(arr,n);

    swaping(arr,n);
    printArray(arr,n);
}