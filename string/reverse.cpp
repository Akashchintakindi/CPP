#include <iostream>
#include <string>
#include <algorithm> // Needed for reverse()

using namespace std;

string reverseWord(string s) {
    int n = s.length();
    string ans = "";
    
    // Reverse the entire string first
    reverse(s.begin(), s.end());
    
    for(int i = 0; i < n; i++) {
        string word = "";
        // Extract each word
        while(i < n && s[i] != ' ') {
            word += s[i];
            i++;
        }
        // Reverse individual word
        reverse(word.begin(), word.end());
        // Add space and word to answer if word is not empty
        if(word.length() > 0) {  
            ans += " " + word;
        }
    }
    return ans.substr(1); // Remove leading space
}

int main() {
    string s = "the pen";
    cout << reverseWord(s);
    return 0;
}