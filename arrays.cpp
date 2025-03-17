#include <iostream>
using namespace std;
int smallestNum(int arr[],int sz){
    int smallest = __INT_MAX__;
    int index;
    
    for(int i=0;i<sz;i++){
        
        smallest = min(arr[i],smallest);
        if(smallest ==  arr[i]);
        index = i;
        
    }
    cout<<"Smallest element is "<<smallest<<" at index "<<index;
}
int changenum(int &a,int &b){
    a=5,b=10;
    cout<<"The Value of a is "<<a<<endl;
    cout<<"The Value of b is "<<b<<endl;
    return 0;
}

int main() {
    int nums[6] = {5,15,22,1,-15,-16};
    int sz = sizeof(nums)/ sizeof(int);
    smallestNum(nums,sz);
    

    int a,b;
    a=23,b=1;
    changenum(a,b);
    cout<<a<<b;

    return 0;
}