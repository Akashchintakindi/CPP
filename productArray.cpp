#include<iostream>
#include<vector>
using namespace std;

vector<int> productExceptSelf(vector<int>& num){
    int sz = num.size();
    vector<int> ans(sz,1);
    for(int i=0;i<sz;i++){
        for(int j = 0;j<sz;j++){
            if(i !=j){
            ans[i] *= num[j];
            }
        }
    }
    // cout<<ans[0]<<endl;
    return ans;
        
}

int main(){
    vector<int> num = {1,2,3,4};
    vector<int> ans = productExceptSelf(num);
    for(int val : ans){
        cout<<val<<" ";
    }
    return 0;
}