#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>

using namespace std;

bool optimized(vector<int>& nums, int k) {
        std::unordered_map<int, int> numbers_to_index;
        for(int i = 0; i < nums.size(); i++) {
            if(numbers_to_index.find(nums[i]) != numbers_to_index.end()) {
                if(abs(numbers_to_index[nums[i]] - i) <= k) {
                    return true;
                }
                else {
                    numbers_to_index[nums[i]] = i;
                }
            }
            else {
                numbers_to_index[nums[i]] = i;
            }
        }
        return false;
    }
    
    bool setApproach(vector<int> &nums, int k) {
        std::unordered_set<int> visited;
        if (nums.size() <=1) {
            return false;
        }
        
        for(int i=0; i <=k && i < nums.size();++i) {
            if(visited.find(nums[i]) != visited.end()) {
                return true;
            }
            else {
                visited.insert(nums[i]);
            }
        }
        
        for(int i=k+1; i < nums.size(); ++i) {
            visited.erase(nums[i-k-1]);
            if (visited.find(nums[i]) != visited.end()) {
                return true;
            }
            else {
                visited.insert(nums[i]);
            }
        }
        return false;
    }
    
    
    bool bruteForce(vector<int>& nums, int k) {
        for(int i = 0; i < nums.size(); i++) {
            for(int j = i+1; j < nums.size(); j++) {
                if((nums[i] == nums[j]) && (abs(i-j)<=k) ) {
                    return true;
                }
            }
        }
        return false;
    }




bool containsDuplicate(std::vector<int> & nums, int k) {
    //return bruteForce(nums, k);
    return setApproach(nums, k);
    
}


int main() {
    
    std::vector<int> nums {1,2,3,1,2,3};
    int k =2;
    auto result = containsDuplicate(nums, k);
    std::cout << result;
    
    
}