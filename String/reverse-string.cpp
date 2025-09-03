#include<iostream>
#include<string>

using namespace std;


string reverse(string s){
    string result = "";
    int start = 0;

    for(int i = 0; i<=s.length(); i++){
        
        if(i == s.length() || s[i] == ' '){
            for(int j = i-1; j>=start; j--){
                result += s[j];
            }

            if(i < s.length()){
                result += " ";
            }

            start = i+1;
        }
    }
    return result;
}

int main(){
    string s;
    cout<<"Enter string: ";
    getline(cin, s);

    cout<<s<<endl;
    cout<<"Reverse string: "<<reverse(s);
}