#include<iostream>
using namespace std;

bool isSorted(int arr[],int size){
    if(size==0 || size==1){
        return 1;
    }
    if(arr[0]>arr[1]){
        return 0;
    }
    else{
        bool remainingPart = isSorted(arr+1, size-1);
        return remainingPart;
    }
}

int main(){
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the element of array: ";
    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }
    cout <<  "Your array is: ";
    for(int i = 0; i<n; i++){
        cout << arr[i] << " ";
    }

    cout << endl;
    if(isSorted(arr,n)){
        cout << "Your Array is Sorted :)";
    }
    else{
        cout << "Your array is not sorted!!!!!!!!!!!!!!";
    }
}