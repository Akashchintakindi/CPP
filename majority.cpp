#include <iostream>
#include <vector>
using namespace std;

// int majorityEle(vector<int> num){
//     int n = num.size();
//     for(int val : num){
//         int freq = 0;
//         for(int el : num){
//             if(el == val){
//                 freq++;
//             }
//         }
//         if(freq>=(n/2))
//         return val;
//     }
    
// }

int majorityEle(vector<int> num){
    int n = num.size();
    int freq=0,ans=0;
    for(int i=0;i<n;i++){
        if(freq == 0){
            ans = num[i];
        }
        if(ans == num[i]){
            freq++;
        } else {
            freq--;
        }
    }
    return ans;
}

int main() {
    vector<int> num = {1,2,2,1,1,1,10};
   
    int ans = majorityEle(num);
    cout<<ans;
    //cout<<ans;
}