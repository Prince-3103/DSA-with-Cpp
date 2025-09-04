#include<iostream>
using namespace std;
int main(){
    int row, column;
    cout<<"Enter number of rows: ";
    cin>>row;
    cout<<"Enter number of columns: ";
    cin>>column;
    int arr[row][column];

    for(int i = 0; i<row; i++){
        cout<<"Enter the "<<i<<"th row element: ";
        for(int j = 0; j<column; j++){
            cin>>arr[i][j];
        }
    }

    cout<<"Your 2d array: "<<endl;
    for(int i = 0; i<row; i++){
        for(int j = 0; j<column; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}