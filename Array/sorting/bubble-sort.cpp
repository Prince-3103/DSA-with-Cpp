// Unsorted array: 10 1 7 4 2 11 
// Sorted Array: 1 2 4 7 10 11 

// Page no. -> 29

#include<iostream>
using namespace std;

void bubbleSort(int arr[], int n){
    for(int i = 0; i<n-1; i++){
        for(int j = 0; j<n-i-1; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
                
            }
        }
    }
}

int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;

    int arr[n];
    cout<<"Enter the element of array: ";
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }

    cout<<"Unsorted array: ";
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    bubbleSort(arr,n);

    cout<<"Sorted Array: ";
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}   