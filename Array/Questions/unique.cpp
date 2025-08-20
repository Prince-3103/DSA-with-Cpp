#include<iostream>
using namespace std;

void unique(int arr[], int size){
    int ans = 0;
    for(int i=0; i<size; i++){
        ans = ans ^ arr[i];
    }
    cout<<"The unique element in array is "<<ans;
}

int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int a[n];

    cout<<"Enter the elements of array:"<<endl;
    for(int i = 0; i < n; i++){
        cin>>a[i];
    }

    cout<<"Your array:"<<endl;
    for(int i = 0; i < n; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;

    unique(a,n);

}