// Enter the number of rows: 5
//     1
//    121
//   12321
//  1234321
// 123454321

#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"Enter the number of rows: ";
  cin>>n;

  int num = 1;
  int nsp = n - 1;
  int row = 1;

  while(row <= n){

    int colsp = 1;
    int colnum1 = 1;
    int colnum2 = 1;
    while(colsp <= nsp){
      cout<<" ";
      colsp++;
    }
    while (colnum1 <= row)
    {
      cout<<colnum1;
      colnum1++;
    }
    int rownum = row - 1;
    while(colnum2 < num){
      cout<<rownum;
      colnum2++;
      rownum--;
    }
    cout<<endl;
    nsp--;
    row++;  
    num++;
  }
}