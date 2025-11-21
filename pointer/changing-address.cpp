#include<iostream>
using namespace std;

void address(int **p){
    *p = *p + 1;
}

int main(){
    int n = 10;
    int *p1 = &n;
    int **p2 = &p1;
    cout << *p2 << endl;
    address(p2);
    cout << *p2 << endl;
    address(p2);
    cout << *p2 << endl;
}