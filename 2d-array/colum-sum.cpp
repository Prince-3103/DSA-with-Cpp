#include<iostream>
using namespace std;

void colSum(int arr[][4], int row, int col){
    for(int i = 0; i<col; i++){
        int sum = 0;
        for(int j = 0; j<row; j++){
            sum += arr[j][i];
        }
        cout<<"Sum of "<<i<<"th colum element: "<<sum;
        cout<<endl;
    }
}

int main(){
    
    int arr[3][4];

    for(int i = 0; i<3; i++){
        cout<<"Enter the "<<i<<"th row element: ";
        for(int j = 0; j<4; j++){
            cin>>arr[i][j];
        }
    }

    cout<<"Your 2d array: "<<endl;
    for(int i = 0; i<3; i++){
        for(int j = 0; j<4; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    colSum(arr,3,4);
}