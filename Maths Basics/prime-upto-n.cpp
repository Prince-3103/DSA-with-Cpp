// We use Sieve of Eratosthenes
// Page number -> 43

#include<iostream>
#include<vector>

using namespace std;

int countPrime(int n){
    int count = 0;
    vector<bool> prime(n+1, true);

    prime[0] = prime[1] = false;

    for(int i = 2; i<n; i++){
        if(prime[i]){
            count++;
        }
    }
}

int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;

}