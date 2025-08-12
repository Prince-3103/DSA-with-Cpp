// Enter the number of rows: 4
// A
// BC
// CDE
// DEFG

#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"Enter the number of rows: ";
  cin>>n;

  int row = 0;
  while(row<n){

    int col = 0;
    while(col<=row){
      char ch = 'A' + row + col;
      cout<<ch;
      col++;
    }
    cout<<endl;
    row++;
  }
}