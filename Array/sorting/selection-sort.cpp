#include<iostream>
using namespace std;

void selectionSort(int arr[], int size){
    for(int i = 0; i < (size-1); i++){
        int minIndex = i;
        for(int j = i+1; j < size; j++){
            if(arr[j] < arr[minIndex]){
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
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
        cout<<arr[i];
    }
    cout<<endl;

    selectionSort(arr,n);

    cout<<"Sorted Array: ";
    for(int i = 0; i<n; i++){
        cout<<arr[i];
    }
    cout<<endl;
}