#include<iostream>
#include<vector>
using namespace std;

void value(vector<int>&temp){
    cout << "Enter element in array: ";
    for(int i = 0; i<4; i++){
        cin >> temp[i];
    }
}

int main(){
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    vector<int>num(n);
    
    value(num);

    cout << "Array: ";
    for(int i=0; i<4; i++){
        cout << num[i] << " ";
    }
}