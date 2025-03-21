#include<iostream>

using namespace std;

string removeOccerences(string s, string part){
    while(s.length()>0 && s.find(part) < s.length()){
        s.erase(s.find(part), part.length());
    }
    return s;
}

int main(){
    string s = "daabcbaabcbc";
    string part = "abc";
    cout<<removeOccerences(s,part);
    return 0;
}