#include <iostream>
using namespace std;

int fibon(int n) {
    if (n == 0 || n == 1) {
        return n;
    }
    return fibon(n-1) + fibon(n-2);
}

int main() {
    // Loop from 0 to 5 and print each Fibonacci number
    for (int i = 0; i <= 5; i++) {
        cout << fibon(i);
        // Add comma and space for all numbers except the last one
        if (i < 5) {
            cout << ", ";
        }
    }
    cout << endl;  // Add newline at the end
    return 0; // time complexity for it is O(2^n)
}