// #include<iostream>
// using namespace std;
// int gmax(int arr[], int n)
// {
//     int max = INT_MIN;
//     for(int i=0; i<n; i++)
//     {
//         if(arr[i]>max)
//         {
//             max = arr[i];
//         }
//     }
//     return max;
// }
// int gmin(int arr[], int n)
// {
//     int min = INT_MAX;
//     for(int i=0; i<n; i++)
//     {
//         if(arr[i]<min)
//         {
//             min = arr[i];
//         }
//     }
//     return min;
// }
// int main()
// {
//     int n;
//     cout<<"Enter the size of array: ";
//     cin>>n;
//     int arr[n];
//     for(int i=0; i<n; i++)
//     {
//         cout<<"Enter the value of "<<i<<"th index: ";
//         cin>>arr[i];

//     }
//     cout<<"The array is: "<<endl;
//     for(int i=0; i<n; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     cout<<"The Maximum Number is "<<gmax(arr,n)<<endl;
//     cout<<"The Minimum Number is "<<gmin(arr,n);
// }

#include<iostream>
using namespace std;

void maxmin(int arr[], int size){
    int max = arr[0];
    int min = arr[0];
    for(int i = 1; i<size; i++){
        if(max < arr[i]){
            max = arr[i];
        }
        if(min > arr[i]){
            min = arr[i];
        }
    }
    cout<<endl<<"Maximum Number: "<<max<<endl;
    cout<<"Minimum Number: "<<min;
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

    

    maxmin(a, n);
}