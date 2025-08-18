#include<iostream>
using namespace std;
int main(){
  int a = 3, b = 6;
  int n;
  cout<<"Enter the number ";
  cin>>n;
  cout<<"a&b: "<< (a&b) <<endl;   // AND
  cout<<"a|b: "<< (a|b) <<endl;   // OR
  cout<<"~a: "<< (~a) <<endl;     // NOT
  cout<<"a^b: "<< (a^b) <<endl;   // XOR
  cout<<"n&1: "<< (n&1) <<endl; 
}