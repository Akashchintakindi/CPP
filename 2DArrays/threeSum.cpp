#include <iostream>
#include <vector>
#include <algorithm>  // for sort
#include <set>        // for set to track unique triplets
using namespace std;

vector<vector<int>> threeSum(vector<int>& nums) {  // Return type should be vector<vector<int>>
    int n = nums.size();  // 
    set<vector<int>> s;   // Added set to track unique triplets
    vector<vector<int>> ans;  // Changed to vector of vectors
    
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            for(int k = j + 1; k < n; k++) {
                if(nums[i] + nums[j] + nums[k] == 0) {
                    vector<int> trip = {nums[i], nums[j], nums[k]};
                    sort(trip.begin(), trip.end());  
                    
                    if(s.find(trip) == s.end()) {
                        s.insert(trip);
                        ans.push_back(trip);
                    }
                }
            }
        }
    }
    return ans;
}

int main() {
    vector<int> nums = {-1, 0, 2, 1, 4, -1};
    vector<vector<int>> ans = threeSum(nums);  // Changed to vector of vectors
    
    // Improved output formatting
    for(const auto& triplet : ans) {
        cout << "[";
        for(int i = 0; i < triplet.size(); i++) {
            cout << triplet[i];
            if(i < triplet.size() - 1) cout << ", ";
        }
        cout << "] ";
    }
    cout << endl;
    
    return 0;
}