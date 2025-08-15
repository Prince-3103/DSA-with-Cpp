#include<iostream>
using namespace std;
int main(){
  int i = 1, n = 1;
  cout<< "++i: "<< ++i <<endl;  // Pre - inc -> i = 2 // o/p = 2
  cout<< "--i: "<< --i <<endl;   // Pre - dec -> i = 1 // o/p = 1
  cout<< "n++ "<< n++ <<endl;   // Post - inc -> n = 2 // o/p = 1
  cout<< "n-- "<< n-- <<endl;   // Post - dec -> n = 1 // o/p = 2
}