// a = 2 -> 10
// b = 3 -> 11
// output -> 3(total number of one)

#include<iostream>
using namespace std;

int totalBits(int a, int b){
  int count = 0;
  while( a!=0 || b!=0){
    if( a&1 ){
      count++;
    }
    if( b&1 ){
      count++;
    }
    a = a>>1;
    b = b>>1;
  }
  return count;
}

int main(){
  int m, n;
  cout<<"Enter two number to find number of set bit: ";
  cin>>m>>n;

  int num = totalBits(m,n);

  cout<<"Total number of set bits are: "<<num;
}