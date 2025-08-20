// Your array:
// 0 1 1 2 0 
// Sorting of colors: 
// 0 0 1 1 2 

#include<iostream>
using namespace std;

void printArray(int a[], int size){
    for(int i = 0; i < size; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

void sort012(int arr[], int n)
{
   //   Write your code here
   int left = 0;
   int mid = 0;
   int right = n-1;

   while(mid<=right){
      if(arr[mid] == 1){
         mid++;
      }
      
      else if(arr[mid] == 0){
         swap(arr[left],arr[mid]);
         left++;
         mid++;
      }
      else{
         swap(arr[mid],arr[right]);
         
         right--;
      }
   }
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
    printArray(a,n);

    sort012(a,n);

    cout<<"Sorting of colors: "<<endl;
    printArray(a,n);
}