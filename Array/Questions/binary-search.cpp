// Your array:
// 2 5 9 14 19 21 
// Enter number to find in array: 19
// The number is at index: 4

// Page -> 12

#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int key){
    int start = 0;
    int end = size - 1;
    

    while(start <= end){
        int mid = start + (end - start)/2;
        if(arr[mid] == key){
            return mid;
        }
        else if(arr[mid] < key){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }
    return -1;
}

int main(){
    int n, find;
    cout<<"Enter the size of array: ";
    cin>>n;
    int a[n];

    cout<<"Enter the elements of array in increasing order:"<<endl;
    for(int i = 0; i < n; i++){
        cin>>a[i];
    }

    cout<<"Your array:"<<endl;
    for(int i = 0; i < n; i++){
        cout<<a[i]<<" ";
    }

    cout<<endl<<"Enter number to find in array: ";
    cin>>find;
    int isFind = binarySearch(a,n,find);
    if(isFind != -1)
        cout<<"The number is at index: "<<isFind;
    else
        cout<<"Number not found!";
}