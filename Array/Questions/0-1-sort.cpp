// Your array:
// 1 0 1 0 0 
// Sorted Array: 
// 0 0 0 1 1 

#include<iostream>
using namespace std;

void printArray(int a[], int size){
    for(int i = 0; i < size; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

void zeroSorting(int arr[], int size){
    int i = 0, j = size - 1;
    while(i<j){
        if(arr[i]==1 && arr[j]==0){
            swap(arr[i], arr[j]);
            i++;
            j--;
        } 
        else if(arr[i] == 0){
            i++;
        }
        else{
            j--;
        }
    }
    cout<<"Sorted Array: "<<endl;
    printArray(arr,size);
}

int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int a[n];

    cout<<"Enter the elements of array:"<<endl;
    for(int i = 0; i < n; i++){
        cin>>a[i];
    }

    cout<<"Your array:"<<endl;
    printArray(a,n);

    zeroSorting(a,n);
}