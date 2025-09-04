#include<iostream>
using namespace std;

bool isFound(int arr[][3], int find, int row, int col){
    for(int i = 0; i<row; i++){
        for(int j = 0; j<col; j++){
            if(arr[i][j] == find){
                return true;
            }
        }
    }
    return false;
}

int main(){
    int row;
    cout<<"Enter number of rows: ";
    cin>>row;
    int arr[row][3];

    for(int i = 0; i<row; i++){
        cout<<"Enter the "<<i<<"th row element: ";
        for(int j = 0; j<3; j++){
            cin>>arr[i][j];
        }
    }

    cout<<"Your 2d array: "<<endl;
    for(int i = 0; i<row; i++){
        for(int j = 0; j<3; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    int target;
    cout<<"Enter number to find: ";
    cin>>target;

    if(isFound(arr, target, row, 3)){
        cout<<"Element found"<<endl;
    }
    else{
        cout<<"Not found"<<endl;
    }
}