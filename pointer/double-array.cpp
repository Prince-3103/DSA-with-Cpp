#include<iostream>
using namespace std;

void twice(int ptr[]){
    for(int i = 0; i<5; i++){
        ptr[i] *= 2;
    }
}

int main(){
    int arr[5] = {7,8,4,3,5};
    cout << "Original Array: ";
    for(int i = 0; i<5; i++){
        cout << arr[i] << " ";
    }

    twice(arr);

    cout << endl << "Double Array: ";
    for(int i = 0; i<5; i++){
        cout << arr[i] << " ";
    }    
}