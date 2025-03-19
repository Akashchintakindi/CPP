#include <iostream>
using namespace std;

int binarySearch(int arr[], int target, int len){
    int st = 0;          // Starting index of the search range
    int end = len - 1;   // Ending index of the search range
    int mid = 0;         // Middle index of the current search range
    
    // Continue searching while the start index is less than or equal to end index
    while(st <= end){
        // Calculate middle index
        // Using (end - st)/2 instead of (st + end)/2 to avoid integer overflow
        mid = st + (end - st)/2;
        
        // If target is greater than middle element,
        // ignore left half by moving start index
        if(target > arr[mid]){
            st = mid + 1;
        }
        // If target is less than middle element,
        // ignore right half by moving end index
        else if(target < arr[mid]){
            end = mid - 1;
        }
        // If target equals middle element,
        // we found the target, return its index
        else{
            return mid;
        }
    }
    // Target not found in array, return -1
    return -1;
}


// int binarySearch(int arr[], int target, int len) {
//     int st = 0;
//     int end = len - 1;  // Fixed: end should be len-1
//     while (st <= end) {
//         int mid = st + (end - st) / 2;  // Better way to calculate mid to avoid overflow
//         if (target > arr[mid]) {        // Fixed: compare with arr[mid]
//             st = mid + 1;              // Update st instead of mid
//         } else if (target < arr[mid]) {
//             end = mid - 1;             // Update end instead of mid
//         } else {
//             return mid;               // Target found
//         }
//     }
//     return -1;  // Target not found
// }

int main() {
    // Note: Array must be sorted for binary search
    int arr[] = {1,2, 3, 4, 5, 12};  // Sorted version of original array
    int target = 5;
    int len = sizeof(arr) / sizeof(int);
    
    cout << binarySearch(arr, target, len);
    return 0;
}

