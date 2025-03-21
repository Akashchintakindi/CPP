#include <iostream>
#include <string>
#include <vector>

using namespace std;

int compress(vector<char> chars) {
    int n = chars.size();
    int idx = 0;
    for(int i = 0; i < n; i++) {
        char ch = chars[i];
        int count = 0;

        while(i < n && chars[i] == ch) {
            count++; i++;
        }
        if(count == 1) {
            chars[idx++] = ch;
        } else {
            chars[idx++] = ch;
            string str = to_string(count);
            for(char dig : str) {
                chars[idx++] = dig;
            }
        }
        i--;
    }
    chars.resize(idx);
    return idx;
}

int main() {
    vector<char> chars = {'a', 'a', 'b', 'b', 'c', 'c', 'c'};
    int newLength = compress(chars);  // Capture the returned length

    // Print the compressed vector
    for(int i = 0; i < newLength; i++) {
        cout << chars[i]<< " ";  // Print without spaces
        // OR: cout << chars[i] << " "; // Print with spaces between characters
    }
    cout << endl;

    // Optional: Print the new length
    cout << "New length: " << newLength << endl;

    return 0;
}