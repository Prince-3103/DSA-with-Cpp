#include<iostream>
using namespace std;

int fibbonaci(int n){
    if(n==0)    return 0;
    if(n==1)   return 1;
    int fibbo;
    fibbo =  fibbonaci(n-1) + fibbonaci(n-2);
    return fibbo;
}

int main(){
    int n;
    cout << "Enter the term you want to find: ";
    cin >> n;
    int ans = fibbonaci(n);
    cout << "Your number is: " << ans;
}