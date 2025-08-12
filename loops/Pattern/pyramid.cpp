// Enter the number of rows: 4
//    1
//   121
//  12321
// 1234321


#include<iostream>
using namespace std;
int main()
{
    // int n,nsp,nst,i,j;
    // cout<<"Enter the number of rows: ";
    // cin>>n;
    // nst = 1;
    // nsp = n-1;
    // for(i=1; i<=n; i++)
    // {
    //     for(j=1; j<=nsp; j++)
    //     {
    //         cout<<" ";

    //     }
    //     nsp--;
    //     for(j=1; j<=i; j++)
    //     {
    //         cout<<j;
    //     }
    //     int count = i-1;
        
    //     for(j=1; j<nst; j++)
    //     {
            
    //         cout<<count;
    //         count--;
    //     }
    //     nst++;
    //     cout<<endl;
    // }

    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;

    int row = 1;
    while(row <= 1){

        int col = 1;
        int num = 1;
        while(col <= n){
            if( n < (row + col)){
                cout<<num;
                num++;
            }
            else{
                cout<<" ";
            }
            col++;
        }
        cout<<endl;
        row++;
    }
}