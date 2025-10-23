#include<iostream>
using namespace std;
int main(){
    int num;
    cout << "Enter the number: ";
    cin >> num;
    int *ptr = &num;
    
    
    cout << "Address is: " << ptr << endl;
    cout << "Value is: " << *ptr << endl;
    cout << "Address of pointer: " << &ptr << endl;
    cout << "Address of num: " << &num << endl;
    cout << "Increment by pointer: " << ++*ptr << endl;
    cout << "Increment num: " << num;
}