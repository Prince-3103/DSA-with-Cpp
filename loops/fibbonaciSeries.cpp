// 0, 1, 1, 2, 3, 5, 8, 13, 21, ...

#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"Enter the number of terms: ";
  cin>>n;
  int a = 0, b = 1;
  int fibbo = 0;

  cout<<"The fibbonaci series till "<< n <<"th term: ";
  cout<<a<<", "<<b<<", ";
  for(int i = 2; i<n; i++){
    fibbo = a + b;
    cout<< fibbo<<", ";
    a = b;
    b = fibbo;
  }
}