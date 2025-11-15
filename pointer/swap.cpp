#include<iostream>
using namespace std;


// Pass by Pointer
// void swap(int *p1, int *p2){
//     int temp = *p1;
//     *p1 = *p2;
//     *p2 = temp;
// }

// Pass by Reference
void swap(int &p1, int &p2){
    int temp = p1;
    p1 = p2;
    p2 = temp;
}

int main(){
    int a = 2, b = 4;
    cout << "num1= "<< a << ", num2= " << b << endl;
    // swap(&a, &b);  // Pass by Pointer
    swap(a,b);       // Pass by Reference
    cout << "num1= "<< a << ", num2= " << b << endl;
}