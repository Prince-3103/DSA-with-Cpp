// n = 4
// A
// BC
// CDE
// DEFG
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n,i,j;
//     cout<<"Enter the number of rows: ";
//     cin>>n;
//     i=0;
//     while(i<n)
//     {
//         j=0;
//         while(j<=i)
//         {
//             char ch = 65 + i + j;
//             cout<<ch;
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
// }


// n=4
// D
// CD
// BCD
// ABCD
#include<iostream>
using namespace std;

int main()
{
    int n,i,j;
    cout<<"Enter the number of rows: ";
    cin>>n;
    i=1;
    while(i<=n)
    {
        j=1;
        char ch = 65 + n -i;
        while(j<=i)
        {
            cout<<ch;
            ch++;
            j++;
        }
        cout<<endl;
        i++;
    }
}