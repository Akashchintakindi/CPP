#include <iostream>
#include <vector>
using namespace std;

bool binarySearch(vector<int>& arr, int tar, int st, int end){
    if(st <= end){
        int mid = st + (end - st) / 2;
        if(arr[mid] == tar){
            return true;  // Changed from returning mid to true
        }
        else if(arr[mid] <= tar){
            return binarySearch(arr, tar, mid + 1, end);  // Fixed recursive call
        }else{
            return binarySearch(arr, tar, st, mid - 1);   // Fixed recursive call
        }
    }
    return false;  // Changed from -1 to false
}

int main(){
    vector<int> arr = {1,2,3,4,5,6};
    int tar = 50;
    bool result = binarySearch(arr, tar, 0, arr.size()-1);
    cout << result << endl;  // Will print 0 for false, 1 for true
    return 0;
}