// Enter the number of rows: 4
//    *
//   **
//  ***
// ****

// #include<iostream>
// using namespace std;
// int main(){
//   int n;
//   cout<<"Enter the number of rows: ";
//   cin>>n;

//   int row = 1;
//   while(row<=n){

//     int col = 1;
//     while(col<=n){
      
//       if( (row+col) > n){
//         cout<<"*";
//       }
//       else{
//         cout<<' ';
//       }
//       col++;

//     }
//     cout<<endl;
//     row++;

//   }
// }


// Method ---> 2

#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"Enter the number of row: ";
  cin>>n;

  int i = 1;

  while(i<=n){
    int nsp = n-i;
    int nst = i;
    int j = 1;
    int k = 1;

    while(j<=nsp){
      cout<<" ";
      j++;
    }
    while(k<=nst){
      cout<<"*";
      k++;
    }
    cout<<endl;
    i++;
  }
}