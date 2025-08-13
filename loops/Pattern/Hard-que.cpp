// Enter the number of rows: 5
// 1234554321
// 1234**4321
// 123****321
// 12******21
// 1********1

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n,nst,i,j;
//     cout<<"Enter the number of rows: ";
//     cin>>n;
//     nst=0;
//     for(i=0; i<n; i++)
//     {
//         for(j=1; j<=n-i; j++)
//         {
//             cout<<j;
//         }
//         for(j=1; j<=nst; j++)
//         {
//             cout<<"*";
//         }
//         for(j=n-i; j>=1; j--)
//         {
//             cout<<j;
//         }
//         cout<<endl;
//         nst = nst + 2;

//     }
// }

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;

    int row = 1;
    int nst = 1;
    while(row <= n){

        int col1 = 1;
        int col2 = 1;
        int col3 = n - row + 1;
        while(col1 <= (n-row+1)){
            cout<<col1;
            col1++;
        }
        while(col2 < nst){
            cout<<"*";
            col2++;
        }
        nst += 2;
        while(col3){
            cout<<col3;
            col3--;
        }
        cout<<endl;
        row++;
    }
}