#include<iostream>
using namespace std;

void reverse(int n, int temp){
    if(temp>n){
        return;
    }
    reverse(n, temp+1);
    cout << temp << " ";
}

int main(){
    int n; 
    cout << "Enter number to be reverse: ";
    cin >> n;
    reverse(n, 1);
}