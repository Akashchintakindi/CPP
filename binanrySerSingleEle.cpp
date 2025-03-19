#include <iostream>
using namespace std;

int serSingleEle(int arr[], int len, int tar){
    int st=0, end = len-1;
    while(st<=end){
        int mid = st + (end - st)/2;

        if(arr[mid - 1] != arr[mid] != arr[mid + 1])
            return mid;
        if(mid%2==0){
        if(arr[mid - 1] == arr[mid]){
            end = mid -1;
        }else {
            st = mid + 1;
        }
    }else
        if(arr[mid - 1] == arr[mid]){
            st = mid + 1;
        }else {
            end = mid -1;
        }
    
        
        return mid;
    }
}


int main(){

    int arr[] = {1,1,2,3,3,4,4,8,8};
    int len = sizeof(arr) / sizeof(int);
    int tar = 2;
    cout<<serSingleEle(arr,len,tar);
    return 0;
}