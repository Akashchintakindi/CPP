#include <iostream>
using namespace std;

// int arraySub(int num[], int sz){
//     for(int st=0;st<sz;st++){
//         for(int end=st;end<sz;end++){
//             for(int i=st;i<=end;i++)
//                 cout<<num[i];
//             cout<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// int kadanes(){
//     int nu;
//     int currSum=0,maxSum = 0;
//         for(int val : nu){
//             currSum += val;
//             maxSum = max(currSum,maxSum);
//             if(currSum<0){
//                 currSum = 0;
//             }
//         }
//         return currSum;
// }
int main() {
    int num[] = {1,2,3,4,-5};
    int sz=5,currSum=0,maxSum=0;
    for(int val : num){
        currSum += num[val];
        maxSum = max(currSum,maxSum);
        if(currSum<0){
            currSum = 0;
        }
    }
    cout<<"Current sum is "<<currSum;
    return 0;
    
}