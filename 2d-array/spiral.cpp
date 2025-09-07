#include<iostream>
#include<vector>
using namespace std;

vector<int> spiralOrder(vector<vector<int> >& matrix) {
    vector<int>ans;
    int row = matrix.size();
    int col = matrix[0].size();

    int sRow = 0;
    int sCol = 0;
    int eRow = row - 1;
    int eCol = col - 1;

    int total = row * col;
    int count = 0;

    while(count < total){

        // Print starting row
        for(int index = sRow; index <= eCol; index++){
            ans.push_back(matrix[sRow][index]);
            count++;
        }
        sRow++;

        // Print end column
        for(int index = sRow; index <= eRow; index++){
            ans.push_back(matrix[index][eCol]);
            count++;
        }
        eCol--;

        // print end row
        for(int index = eCol; index >= sCol; index--){
            ans.push_back(matrix[eRow][index]);
            count++;
        }
        eRow--;
        
        // Print start column
        for(int index = eRow; index >= sRow; index--){
            ans.push_back(matrix[index][sCol]);
            count++;
        }
        sCol++;

    }
    return ans;
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

    vector<int>spiralMatrix = spiralOrder(matrix);

    cout << "Sprial ordr of your matrix: " << endl;
    for(int i = 0; i < spiralMatrix.size(); i++){
        cout << spiralMatrix[i] << " ";
    }
    cout << endl;
}