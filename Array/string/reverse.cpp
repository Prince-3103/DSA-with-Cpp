#include<iostream>
using namespace std;
int main(){
    char name[20];
    cout<<"Enter your name: ";
    cin>>name;

    int i = 0;
    int count = 0;
    while(name[count] != '\0'){
        count++;
    }
    int j = count - 1;
    while(i<=j){
        swap(name[i],name[j]);
        i++;
        j--;
    }

    cout<<"Reverse: "<<name;
}