#include<iostream>
using namespace std;

void swap(int *p1, int *p2){
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

int main(){
    int a = 2, b = 4;
    cout << "num1= "<< a << ", num2= " << b << endl;
    swap(&a, &b);
    cout << "num1= "<< a << ", num2= " << b << endl;
}