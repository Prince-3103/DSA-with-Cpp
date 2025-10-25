#include<iostream>
using namespace std;

void add(int n, int sum){
    if(n<1){
        cout << "Sum of number is: " << sum;
        return;
    }
    sum = sum + n;
    add(n-1, sum);
}

int main(){
    int n;
    cout << "Enter the number till you want to sum: ";
    cin >> n;
    add(n,0);
}