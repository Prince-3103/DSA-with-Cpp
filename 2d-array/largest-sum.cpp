#include<iostream>
using namespace std;

void rowSum(int arr[][4], int row, int col){
    int largeSum = INT_MIN;
    int index = 0;
    for(int i = 0; i<row; i++){
        int sum = 0;
        for(int j = 0; j<col; j++){
            sum += arr[i][j];
        }
        cout<<"Sum of "<<i<<"th row element: "<<sum;
        cout<<endl;

        if(sum > largeSum){
            largeSum = sum;
            index = i;
        }
    }
    cout<<"The largest sum of row: "<<largeSum<<" at "<<index<<"th row";
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

    rowSum(arr,3,4);
}