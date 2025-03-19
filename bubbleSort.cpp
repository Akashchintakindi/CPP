#include <iostream>
using namespace std;

// Function to perform bubble sort on an array
void bubbleSort(int arr[], int len){
    // Outer loop for number of passes
    for(int i=0; i < len - 1; i++){
        // Flag to optimize by checking if any swaps occurred
        bool isSwap = false;
        // Inner loop to compare adjacent elements
        for(int j=0; j < len - i - 1; j++){
            // Compare adjacent elements
            if(arr[j] > arr[j+1]){
                // Swap if current element is greater than next element
                swap(arr[j], arr[j+1]);
                isSwap = true;  // Mark that a swap occurred
            }
        }
        // If no swaps occurred in this pass, array is already sorted
        if(!isSwap)
            return;
    }
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
    int len = sizeof(arr)/ sizeof(int);
    // Call bubble sort function to sort the array
    bubbleSort(arr, len);
    // Print the sorted array
    printArray(arr, len);
    // Indicate successful program completion
    return 0;
}