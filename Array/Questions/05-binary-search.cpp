// LeetCode -> 33. Search in Rotated Sorted Array
// Example 1:

// Input: nums = [4,5,6,7,0,1,2], target = 0
// Output: 4
// Example 2:

// Input: nums = [4,5,6,7,0,1,2], target = 3
// Output: -1

//Page no. -> 15

#include<iostream>
using namespace std;

int pivotIndex(int nums[],int size){
    int start = 0;
    int end = size - 1;
    while(start < end){
        int mid = start + (end - start)/2;
        if(nums[mid] >= nums[0]){
            start = mid + 1;
        }
        else{
            end = mid;
        }
    }
    return start;
}

int binarySearch(int nums[], int s, int e, int target){
    int start = s;
    int end = e;
    while(start <= end){
        int mid = start + (end - start)/2;
        if(nums[mid] == target){
            return mid;
        }
        else if(nums[mid] < target){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }

    }
    return -1;
}

int search(int nums[],int size, int target) {
    
    int pivot = pivotIndex(nums,size);
    int n = size;
    if(n == 0) return -1;       // edge case: empty
    if(n == 1) return nums[0] == target ? 0 : -1;
    if( target >= nums[pivot] && target <= nums[n-1]){
        return binarySearch(nums,pivot,n-1,target);
    }
    else{
        return binarySearch(nums,0,pivot-1,target);
    }
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

    int target;
    cout<<"Enter number find in array: "<< endl;
    cin>> target;

    cout<<"Your number is at: "<<search(a,n,target);
}