// Enter the number of rows: 4
//    1
//   22
//  333
// 4444

#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"Enter the number of rows: ";
  cin>>n;

  int row = 1;
  while(row <= n){

    int col = 1;
    while(col <= n){

      if(n < ( row + col ) ){
        cout<<row;
      }
      else{
        cout<<" ";
      }
      col++;
    }
    cout<<endl;
    row++;
  }
}