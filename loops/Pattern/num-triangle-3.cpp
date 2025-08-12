
// n = 4
// 1
// 2 1
// 3 2 1
// 4 3 2 1

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;

    int row = 1;
    while(row<=n){

        int col = 1;
        while(col<=row){
            int num = row-col+1;
            cout<<num;
            col++;
        }
        cout<<endl;
        row++;
    }
}