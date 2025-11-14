#include<iostream>
using namespace std;
int main(){
    // char ch = 'p';
    // char *ptr = &ch;
    char arr[7] = "Prince";
    char *ptr = arr;
    cout << arr << endl;        // Elements
    cout << (void*)&arr << endl;    // Address of array
    cout << (void*)ptr << endl;     // Address of array via pointer
    cout << &ptr << endl;           // Address of pointer
}