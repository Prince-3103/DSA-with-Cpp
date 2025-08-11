// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter number to check Prime or not Prime: ";
//     cin>>n;
//     int i, flag=0;
//     for(i=2; i<=n/2; i++)
//     {
//         if(n%i==0)
//         {
//             flag=1;
//             break;
//         }

//     }
//     if(flag)
//     {
//         cout<<"The given number is Not Prime.";
//     }
//     else{
//         cout<<"The given number is  Prime.";
//     }
// }

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number to find the sum: ";
    cin>>n;
    int i = 2;
    int prime = 0;

    while(i<n){
        if(n%i == 0){
            prime = 1;
            break;
        }
        i++;
    }
    if(prime){
        cout<<n<<" is not a Prime number.";
    }
    else{
        cout<<n<<" is a Prime number.";
    }
}