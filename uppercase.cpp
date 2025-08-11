#include<iostream>
using namespace std;
int main(){
  char ch;
  cout<<"Enter number or alphabate: ";
  cin>>ch;
  if(ch>=65 && ch<=90){
    cout<<"This is an Uppercase alphabate.";
  }
  else if(ch>=97 && ch<=122){
    cout<<"This is a Lowercase alphabate.";
  }
  else if(ch>=48 && ch<=57){
    cout<<"This is a number.";
  }
  else{
    cout<<"This is an special symbol.";
  }
}