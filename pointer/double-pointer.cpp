#include<iostream>
using namespace std;
int main(){
    int num = 10;
    int *p = &num;
    int **p1 = &p;
    cout << "Before sum: " << num << endl;
    *p = *p + 10;
    cout << "After sum: " << num << endl;
    **p1 = **p1 + 10;
    cout << "After sum: " << num << endl;

    cout << "Address of num: " << &num <<endl;
    cout << "Address of single pointer: " << p << endl;
    cout << "Address of double pointer: " << *p1 << endl;

}