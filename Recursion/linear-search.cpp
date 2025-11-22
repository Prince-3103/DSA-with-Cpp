#include<iostream>
using namespace std;

bool linearSearch(int arr[], int size, int key){
    if(size==0){
        return 0;
    }
    if(arr[0]==key){
        return 1;
    }
    bool remain = linearSearch(arr+1, size-1,key);
    return remain;
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

    int find;
    cout << endl << "Enter number to find in array: ";
    cin >> find;

    if(linearSearch(arr, n, find)){
        cout << "Element is in array ;)";
    }
    else{
        cout << "Not Found!!";
    }
}