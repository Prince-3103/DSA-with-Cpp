// Enter the number of rows: 4
//    *
//   **
//  ***
// ****


// #include<iostream>
// using namespace std;
// int main()
// {
//     int n,i,j;
    
//     cout<<"Enter the number of rows: ";
//     cin>>n;
//     i=1;
    
//     while(i<=n)
//     {
//         j=1;
//         while(j<=n)
//         {
//             if((i+j)>n)
//             {
//                 cout<<"*";
//             }
//             else
//             {
//                 cout<<" ";
//             }
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
// }


// #include<iostream>
// using namespace std;
// int main()
// {
//     int n,nst,nsp;
//     cout<<"Enter the number of row: ";
//     cin>>n;
//     int i=1;
//     while(i<=n)
//     {
//         nsp = n - i;
//         while(nsp>0)
//         {
//             cout<<" ";
//             nsp--;
//         }
//         nst=1;
//         while(nst<=i)
//         {
//             cout<<"*";
//             nst++;
//         }
//         i++;
//         cout<<endl;
//     }
// }


// Enter the number of rows: 4
// ****
// ***
// **
// *

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n,i,j;
//     cout<<"Enter the number of rows: ";
//     cin>>n;
//     i=n;
//     while(i>=1)
//     {
//         j=1;
//         while(j<=i)
//         {
//             cout<<"*";
//             j++;
//         }
//         i--;
//         cout<<endl;
//     }
// }


// Enter the number of row: 4
// ****
//  ***
//   **
//    *



// #include<iostream>
// using namespace std;
// int main()
// {
//     int n,nst,nsp,i,j;
//     cout<<"Enter the number of row: ";
//     cin>>n;
//     nst = n;
//     nsp = 0;
//     for(i=1; i<=n; i++)
//     {
//         for(j=1; j<=nsp; j++)
//         {
//             cout<<" ";
//         }

//         for(j=1; j<=nst; j++)
//         {
//             cout<<"*";
//         }
        
//         cout<<endl;
//         nst--;
//         nsp++;
//     }
// }


// Enter the number of rows: 4
// 1111
//  222
//   33
//    4


// #include<iostream>
// using namespace std;
// int main()
// {
//     int n,i,j,nsp,nst;
//     cout<<"Enter the number of rows: ";
//     cin>>n;
//     nsp=0;
//     nst = n;
//     for(i=1; i<=n; i++)
//     {
//         for(j=1; j<=nsp; j++)
//         {
//             cout<<" ";

//         }
//         for(j=1; j<=nst; j++)
//         {
// //             cout<<i;
// //         }
// //         nsp++;
// //         nst--;
// //         cout<<endl;
// //     }
// // }


// Enter the number of rows: 4
// 1234
//  234
//   34
//    4


#include<iostream>
using namespace std;
int main()
{
    int n,nsp,i,j;
    cout<<"Enter the number of rows: ";
    cin>>n;
    nsp=0;
    
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=nsp; j++)
        {
            cout<<" ";
        }
        nsp++;
        for(j=i; j<=n; j++)
        {
            cout<<j;
        }
        cout<<endl;
    }
}