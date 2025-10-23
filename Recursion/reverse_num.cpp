#include<iostream>
using namespace std;

void reverse(int n){
    if(n < 1){
        return;
    }
    cout << n << " ";
    reverse(n-1);
}

int main(){
    int n;
    cout << "Enter number to print in reverse: ";
    cin >> n;
    reverse(n);
}