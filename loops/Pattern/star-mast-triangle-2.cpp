// Enter the number of rows: 4
// ****
//  ***
//   **
//    *
#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"Enter the number of rows: ";
  cin>>n;

  int nst = n;
  int nsp = 0;
  int row = 0;
  while(row<n){
    int col = 0;
    while(col<nsp){
      cout<<" ";
      col++;
    }
    nsp++;
    while (col<nst)
    {
      cout<<'*';
      col++;
    }
    cout<<endl;
    row++;
  }
}