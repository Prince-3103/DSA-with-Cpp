#include<iostream>
using namespace std;

void linear(int n,int temp){
    if(temp > n){
        return;
    }
    cout << temp << " ";
    linear(n, temp+1);
}

int main(){
    int n;
    cout << "Enter number: ";
    cin >> n;
    linear(n,1);

}