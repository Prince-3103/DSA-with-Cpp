#include<iostream>
using namespace std;

int pow(int n){
    if(n==0){
        return 1;
    }
    
    return 2 * pow(n-1);
}

int main(){
    int n;
    cout << "Enter the degree of 2: ";
    cin >>n;

    int ans = pow(n);

    cout << "2 power " << n << " is: " << ans << endl;
}