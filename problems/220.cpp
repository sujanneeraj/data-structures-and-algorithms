#include <iostream>
#include <set>
#include <vector>
#include <bits/stdc++.h>

using namespace std;



    
    
    bool orderedSet(vector<int>& nums, int k, int t) {
        int n = nums.size();
        std::set<int> set;
        
        for(int i = 0; i <=k && i < n; ++i) {
            int lb = (nums[i] <= INT_MIN+t) ? INT_MIN : (nums[i]-t);
            int ub = (nums[i] >= INT_MAX -t -t) ? INT_MAX : (nums[i] + t + 1);
            if(set.lower_bound(lb) != set.lower_bound(ub)) {
                return true;
            }
            set.insert(nums[i]);
        }
        
        for(int i=1; i+k<n;++i) {
            set.erase(nums[i-1]);
             int lb = (nums[i+k] <= INT_MIN+t) ? INT_MIN : (nums[i+k]-t);
            int ub = (nums[i+k] >= INT_MAX -t -t) ? INT_MAX : (nums[i+k] + t + 1);
            if(set.lower_bound(lb) != set.lower_bound(ub)) {
                return true;
            }
            set.insert(nums[i+k]);
        }
        return false;
    }
    
    bool bruteForce(vector<int> &nums, int k, int t) {
        for(int i = 0; i < nums.size(); ++i) {
            for(int j = i+1; j < nums.size(); ++j) {
                int a = nums[i];
                int b = nums[j];
                if(abs(a - b) <=t &&  abs(i-j) <=k) {
                    return true;
                }
            }
        }
        return false;
    }
    
bool containsNearbyAlmostDuplicate(vector<int>& nums, int k, int t) {
        //return bruteForce(nums, k, t);
        return orderedSet(nums, k, t);
    }
    
    
int main() {
    std::vector<int >nums {1,2,3,1};
    int k = 3, t = 0;
    
    auto result = containsNearbyAlmostDuplicate(nums, k,t);
    
    std::cout << result;
}