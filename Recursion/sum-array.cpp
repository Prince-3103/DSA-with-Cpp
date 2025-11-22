#include<iostream>
using namespace std;

int sumOfArray(int arr[], int size){
    if(size==0){
        return 0;
    }
    if(size==1){
        return arr[0];
    }
    int remaining = sumOfArray(arr+1,size-1);
    return arr[0]+ remaining;
    
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

    int ans = sumOfArray(arr,n);
    cout << endl << "Sum of array: "<<ans;
}