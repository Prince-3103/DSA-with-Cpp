#include<iostream>
using namespace std;
int main(){
    char name[20];
    cout<<"Enter your name: ";
    cin>>name;

    cout<<"Your name is "<<name;
    int length = 0;

    while(name[length] != '\0'){
        length++;
    }
    
    cout<<endl<<"Your name length: "<<length;
}