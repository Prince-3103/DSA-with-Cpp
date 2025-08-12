// Enter the number of rows: 4
// 1234
//  234
//   34
//    4

#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"Enter the number of rows: ";
  cin>>n;

  int num = n;
  int nsp = 0;
  int row = 1;
  while(row <= n){

    int colsp = 1;
    int colnum = 1;
    int pnum = row;

    while(colsp <= nsp){
      cout<<" ";
      colsp++;
    }
    nsp++;

    while(colnum <= num){
      cout<<pnum;
      colnum++;
      pnum++;
    }
    cout<<endl;
    num--;

    row++;
  }
}