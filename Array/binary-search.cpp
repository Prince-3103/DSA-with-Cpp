#include<iostream>
using namespace std;

int search(int arr[], int size, int key){
    int s = 0;
    int e = size-1;
    while(s<=e){
        int mid = s+(e-s)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]<key){
            s = mid+1;
        }
        else{
            e = mid-1;
        }
    }
    return -1;
}

int main(){
    int arr[9] = {2,4,6,8,9,10,12,34,54};
    int find;
    cout << "Enter number to find: ";
    cin >> find;
    int ans = search(arr, 9, find);
    
    cout << "The element is in the array " << ans;
}