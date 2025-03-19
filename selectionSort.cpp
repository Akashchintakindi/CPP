#include <iostream>
using namespace std;

// Function to perform selection sort on an array
void selectionSort(int arr[], int n){
    // Outer loop to iterate through unsorted portion
    for(int i=0; i < n-1; i++){
        // Assume current index has smallest value initially
        int smallestIdx = i;
        // Inner loop to find smallest element in unsorted portion
        for(int j=i+1; j < n; j++){
            // Update smallestIdx if we find a smaller element
            if(arr[j] < arr[smallestIdx])
                smallestIdx = j;
        }
        // Swap current element with smallest element found
        swap(arr[i], arr[smallestIdx]);
    }
    // Return sorted array (though not strictly necessary)
    return;
}

// Function to print array elements
void printArray(int arr[], int n){
    // Loop through array and print each element
    for(int i=0; i < n; i++){
        cout << arr[i] << " ";  // Print element followed by space
    }
}

int main(){
    // Initialize array with unsorted values
    int arr[] = {4, 1, 5, 2, 3};
    // Calculate array length using sizeof operator
    int len = sizeof(arr)/sizeof(int);
    // Call selection sort function to sort the array
    selectionSort(arr, len);
    // Print the sorted array
    printArray(arr, len);
    // Indicate successful program completion
    return 0;
}