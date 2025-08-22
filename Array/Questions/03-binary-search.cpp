// Your array:
// 0 0 1 1 2 2 2 2 
// Enter number to find its First and Last Position: 2
// First occurence of 2 is: 4
// Last occurence of 2 is: 7

#include<iostream>
using namespace std;

int firstPosition(int arr[], int size, int key){
    int start = 0;
    int end = size - 1;
    int ans = -1;
    while(start <= end){
        int mid = start + (end - start)/2;
        if(arr[mid] == key){
            ans = mid;
            end = mid - 1;
        }
        else if(arr[mid] < key){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }
    return ans;
}

int lastPosition(int arr[], int size, int key){
    int start = 0;
    int end = size - 1;
    int ans = -1;
    while(start <= end){
        int mid = start + (end - start)/2;

        if(arr[mid] == key){
            ans = mid;
            start = mid + 1;
        }
        else if(arr[mid] < key){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }
    return ans;
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

    cout<<endl<<"Enter number to find its First and Last Position: ";
    cin>>find;

    int isFirst = firstPosition(a,n,find);
    int isLast = lastPosition(a,n,find);

    cout<<"First occurence of "<< find <<" is: "<< isFirst <<endl;
    cout<<"Last occurence of "<< find <<" is: "<< isLast <<endl;

}