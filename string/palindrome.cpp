#include <iostream>
using namespace std;

bool isAlphaNum(char ch){
    if((ch >= '0' && ch<='9') ||
    (tolower(ch) >= 'a' && tolower(ch) <= 'z')){
        return true;
    }
    return false;
}


bool isPalindrome(string str){
    int st=0, end = str.length() -1;

    while(st < end){
        if(isAlphaNum(str[st])){
            st++;continue;
        }
        if(isAlphaNum(str[end])){
            end--;continue;
        }
        if(tolower(str[st]) != tolower(str[end])){
            false;
        }
        st++;
        end--;
    }
    return true;
}

int main(){
    string str = "Ac3?e3c&a";
    
    cout<<(isPalindrome(str)?"True":"False");
    return 0;
}