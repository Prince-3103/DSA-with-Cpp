// Enter number of rows: 4
//    *
//   ***
//  *****
// *******
#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"Enter number of rows: ";
  cin>>n;

  int row = 1;
  int nsp = n - 1;
  int nst = 1;

  while (row <= n)
  {

    int colsp = 1;
    int colst = 1;
    while(colsp <= nsp){
      cout<<" ";
      colsp++;
    }
    nsp--;
    while(colst <= nst){
      cout<<"*";
      colst++;
    }
    cout<<endl;
    nst += 2;
    row++;
  }
  
}