// Unsorted array: 10 1 7 4 2 11 
// Sorted Array: 1 2 4 7 10 11 

// Page no. -> 35

// Best Case (Already Sorted):
// O(n) → Each element is compared once, no shifts needed.

// Worst Case (Reverse Sorted):
// O(n²) → Each insertion shifts nearly all previous elements.

// Average Case:
// O(n²)

#include<iostream>
using namespace std;

void insertionSort(int arr[], int size){
    
    for(int i = 1; i < size; i++){
        int temp = arr[i];
        int j = i - 1;
        while(j >= 0){
            if(arr[j] > temp){
                arr[j+1] = arr[j];
            }
            else{
                break;
            }
            j--;
        }
        arr[j+1] = temp;
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

    insertionSort(arr,n);

    cout<<"Sorted Array: ";
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}