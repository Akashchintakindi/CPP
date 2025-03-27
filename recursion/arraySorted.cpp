#include <iostream>   // Include input/output stream library
#include <vector>     // Include vector container library
using namespace std;  // Use standard namespace to avoid prefixing std::

// Function to check if array is sorted in non-decreasing order
// Takes a vector of integers and its size as parameters
bool arraySorted(vector<int> arr, int n){
    // Base cases: if array is empty or has 1 element, it's sorted
    if(n == 0 || n==1){
        return true;    // Return true as empty or single-element array is always sorted
    }

    // Recursive check:
    // 1. Compare current element (n-1) with previous element (n-2)
    // 2. Recursively check the rest of the array up to n-1
    return arr[n-1] >= arr[n-2] && arraySorted(arr, n-1);
}

int main(){
    // Initialize a vector with sorted integers
    vector<int> arr = {1,2,3,4,5};
    
    // Get the size of the vector
    int n = arr.size();
    
    // Print the result (1 for true, 0 for false)
    // Calls arraySorted function with the vector and its size
    cout << arraySorted(arr,n);
    
    return 0;    // Indicate successful program completion
}