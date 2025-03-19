#include <iostream>
#include<vector>
using namespace std;

int binarySearchSorted(vector<int> arr, int tar){

    int st=0,end = arr.size() - 1;

    if(st<=end){
        int mid = st + (end - st)/2;
        if(arr[mid] == tar){
            return mid;
        }
        if(arr[st] <= tar && tar <= arr[mid]){
            end = mid - 1;
        }else {
            st = mid +1;
        }
        if(arr[mid] <= tar && tar <= arr[end]){
            st = mid + 1;
        }else {
            end = mid - 1;
        }
        return mid;
    }
    return -1;
}

int main(){

    vector<int> arr = {6,7,0,1,2,3,4,5};
    int tar = 4;
    cout<<binarySearchSorted(arr, tar);
    return 0;
}