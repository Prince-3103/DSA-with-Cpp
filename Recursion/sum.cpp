#include<iostream>
using namespace std;

// void add(int n, int sum){
//     if(n<1){
//         cout << "Sum of number is: " << sum;
//         return;
//     }
//     sum = sum + n;
//     add(n-1, sum);
// }

int add(int n){
    if(n<1){
        return 0;
    }
    return n + add(n-1);;
}

int main(){
    int n;
    cout << "Enter the number till you want to sum: ";
    cin >> n;
    cout << add(n);
}