// Enter the number of rows: 4
// 1
// 22
// 333
// 4444
#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"Enter the number of rows: ";
  cin>>n;

  int row = 1;
  while(row<=n){

    int col = 1;
    while(col<=row){
      cout<<row;
      col++;
    }

    cout<<endl;
    row++;
  }
}