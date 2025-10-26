#include<iostream>
using namespace std;

void reverse(int arr[], int start, int size){
    if(start >= size/2){
        return;
    }
    swap(arr[start],arr[size - start - 1]);
    reverse(arr, start+1, size);
}

int main(){
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the element of array: " ;
    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }
    cout << "Your array: "<< endl;
    for(int i = 0; i<n; i++){
        cout << arr[i] << " ";
    }

    reverse(arr,0, n);
    cout << endl << "Reversed array: "<< endl;
    for(int i = 0; i<n; i++){
        cout << arr[i] << " ";
    }
}