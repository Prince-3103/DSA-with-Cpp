#include<iostream>
using namespace std;



bool isPalindrome(char s[], int len){

    int start = 0;
    int end = len - 1;

    while(start <= end){
        if(s[start] != s[end]){
            return false;
        }
        start++;
        end--;
    }
    return true;
}

int main(){
    char string[20];
    cout<<"Enter your string: ";
    cin>>string;

    int count = 0;
    while(string[count] != '\0'){
        count++;
    }

    if(isPalindrome(string,count)){
        cout<<"Your string is palindrome.";

    }

    else{
        cout<<"No, your string is not palindrome.";
    }
}