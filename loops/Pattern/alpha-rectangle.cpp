// n=3
// AAA
// BBB
// CCC

// #include<iostream>
// using namespace std;

// int main()
// {
//     int n,row,col;
//     cout<<"Enter the number of row: ";
//     cin>>n;
//     row = 0;
//     while(row<n)
//     {
//         col = 0;
//         char alph = 65 + row;
//         while(col<n)
//         {
//             cout<<alph;
//             col++;
//         }
//         cout<<"\n";
//         row++;
//     }
// }



// if n=4
// ABC
// ABC
// ABC

#include<iostream>
using namespace std;

int main()
{
    int n,row,col;
    cout<<"Enter the number of row: ";
    cin>>n;
    row = 0;
    while(row<n)
    {
        col = 0;
        
        while(col<n)
        {
            char alph = 65 + col;
            cout<<alph;
            col++;
        }
        row++;
        cout<<endl;
    }
    
}