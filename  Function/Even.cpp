#include<iostream>
using namespace std;

bool isEven(int a){
  // 0 -> Odd
  // 1 -> Even

  if( a&1 ){
    return 0;
  }
  return 1;

}

int main(){
  int n;
  cout<<"Enter number to check: ";
  cin>>n;

  if( isEven(n) ){
    cout<<"Number is even.";
  }
  else{
    cout<<"Number is odd.";
  }
}