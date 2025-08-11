// sum of 1 to n
// n=5
// output = 15

#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"Enter number: ";
  cin>>n;
  int i = 1, sum = 0;

  while(i<=n){
    sum = sum + i;
    i++;
  }

  cout<<"The sum of the from 1 to "<<n<<" is: "<<sum;
}