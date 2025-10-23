#include<iostream>
using namespace std;

void linearly(int n, int temp){
    if(temp < 1){
        return;
    }
    linearly(n, temp-1);
    cout << temp <<" ";
}

int main(){
    int n; 
    cout << "Enter the number: ";
    cin >> n;
    linearly(n,n);
}