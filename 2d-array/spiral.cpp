#include<iostream>
#include<vector>
using namespace std;

vector<int> spiralOrder(vector<vector<int>>& matrix, int row, int col) {
    
}

int main(){
    int row, col;
    cout << "Enter the number of row: ";
    cin >> row;
    cout << "Enter the number of column: ";
    cin >> col;

    vector<vector<int> > matrix(row, vector<int>(col));

    cout << "Enter your array:" << endl;
    for(int i = 0; i<row; i++){
        for(int j = 0; j<col; j++){
            cin >> matrix[i][j];
        }
    }

    cout<<"Your matrix is: "<< endl;
    for(int i = 0; i<row; i++){
        for(int j = 0; j<col; j++){
            cout << matrix[i][j] <<" ";
        }
        cout << endl;
    }

}