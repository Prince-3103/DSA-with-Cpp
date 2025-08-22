// Your array:
// 1 2 5 7 2 
// The Peak Element at: 3

#include<iostream>
using namespace std;

int peak(int arr[], int size){
    int start = 0;
    int end = size - 1;
    while(start < end){
        int mid = start + (end - start)/2;
        
        if(arr[mid] < arr[mid+1]){
            start = mid + 1;
        }
        else{
            end = mid;
        }
    }
    return start;
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
    cout<<endl;

    int ans = peak(a,n);
    cout<<"The Peak Element at: "<<ans;
}