// Your array:
// 9 7 5 4 2 1 
// Enter number to find in array: 7
// 7 is in array at 1

#include<iostream>
using namespace std;

int reverseBinary(int arr[], int size, int key){
    int start = 0;
    int end = size - 1;
    
    while(start<=end){
        int mid = start + (end - start)/2;

        if(arr[mid] == key){
            return mid;
        }
        else if(arr[mid] > key){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }

    }
    return -1;
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
    for(int i = 0; i < n; i++){
        cout<<a[i]<<" ";
    }

    int find;

    cout<<endl<<"Enter number to find in array: ";
    cin>>find;

    int ans = reverseBinary(a,n,find);
    cout<<find<<" is in array at "<<ans<<endl;
}