#include<iostream>
using namespace std;

bool isValid(char check){
    
    if((check>='0' && check<='9') || (check>='a' && check<='z')){
        cout<<"Check ";
        return true;
    }
    cout<<"ignore";
    return false;
    
}

void lowerCase(char s[], int len){

    int i = 0;
    while(i<len){
        if(s[i]>='A' && s[i]<='Z'){
            s[i] = s[i] - 'A' + 'a';
        }
        i++;
    }
}

bool isPalindrome(char s[], int len){

    int start = 0;
    int end = len - 1;
    
    while(start <= end){
        if(isValid(s[start]) && isValid(s[end])){
            if(s[start] != s[end]){
                cout<<"Wrong "<<s[start]<<" = "<<s[end]<<endl;
                return false;
            }
            cout<<"Right "<<s[start]<<" = "<<s[end]<<endl;
            start++;
            end--;
        }
        else if(!isValid(s[start])){
            cout<<s[start]<<endl;
            start++;
        }
        else{
            cout<<s[end]<<endl;
            end--;
        }
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

    lowerCase(string,count);
    cout<<"Your lower case string is:"<<string<<endl;;

    if(isPalindrome(string,count)){
        cout<<"Your string is palindrome.";

    }

    else{
        cout<<"No, your string is not palindrome.";
    }
}