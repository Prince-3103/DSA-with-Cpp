// arr[5] = {1,3,1,4,2}
// Finding numbers how many time they occured in an array
// find = 3
// ans = 1
// find = 1
// ans = 2

#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the element of array: ";
    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }

    int hash[24] = {0};
    for(int i = 0; i<n; i++){
        hash[arr[i]] += 1;
    }

    int q; 
    cout << "How many numbers you want to find: ";
    cin >> q;
    while(q--){
        int num;
        cout << "Enter number you want to find: ";
        cin >> num;

        // Fetch
        cout << "Number of times " << num <<" appeared: " << hash[num] << endl;
    }
}