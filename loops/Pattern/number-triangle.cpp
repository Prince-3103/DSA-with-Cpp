// n=4
// 1
// 2 3
// 3 4 5
// 4 5 6 7

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n,i=1,j;
//     cout<<"Enter the number: ";
//     cin>>n;
//     while(i<=n)
//     {
//         j=1;
//         int count = i;
//         while(j<=i)
//         {
            
//             cout<<count<<" ";
            
//             count++;
//             j++;
//         }
//         i++;
//         cout<<endl;
//     }
// }

// n = 4
// 1
// 2 1
// 3 2 1
// 4 3 2 1

#include<iostream>
using namespace std;
int main()
{
    int n,i=1,j;
    cout<<"Enter the Row: ";
    cin>>n;
    while(i<=n)
    {
        j=1;
        int rev = i;
        while(j<=i)
        {
            cout<<rev<<" ";
            rev--;
            j++;
        }
        cout<<endl;
        i++;
    }
}