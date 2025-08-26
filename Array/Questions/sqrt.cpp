
#include<iostream>
using namespace std;

int sqrt(int x){
    if(x == 0 || x == 1) return x;
    int start = 0;
    int end = x;
    int ans;
    while(start <= end){
        int mid = start + (end - start)/2;
        if(mid == x/mid){
            return mid;
        }
        else if(mid < x/mid){
            start = mid + 1;
            ans = mid;
        }
        else{
            end = mid - 1;
        }

    }
    return ans;
}

int main(){
    int n;
    cout<<"Enter number to find its square root: ";
    cin>>n;

    cout<<"The square root of "<< n <<" is: "<<sqrt(n);
}