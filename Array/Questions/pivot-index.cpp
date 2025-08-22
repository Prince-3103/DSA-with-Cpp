// The pivot index is the index where the sum of all the numbers strictly to the left of the index is equal to the sum of all the numbers strictly to the index's right.

// means, left side = right side

// Your array:
// 1 7 3 6 5 6 
// The pivot index is: 3
// Left sum = nums[0] + nums[1] + nums[2] = 1 + 7 + 3 = 11
// Right sum = nums[4] + nums[5] = 5 + 6 = 11

#include<iostream>
using namespace std;

int pivotIndex(int arr[], int size){
    int totalSum = 0;
    int leftSum = 0;
    int rightSum = 0;
    for(int i = 0; i<size; i++){
        totalSum += arr[i];
    }
    for(int i = 0; i < size; i++){
        if(i>0){
            leftSum += arr[i-1];
        }
        
        rightSum = totalSum - leftSum - arr[i];
        if(leftSum == rightSum){
            return i;
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
    cout<<endl;

    cout<<"The pivot index is: "<<pivotIndex(a,n);
}