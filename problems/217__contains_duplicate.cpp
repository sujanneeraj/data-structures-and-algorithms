
// Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.

#include <iostream>
#include <vector>
#include <unordered_set>


bool bruteForce(const std::vector<int> &nums) {
    for(int i= 0; i < nums.size(); i++) {
        for(int j=i+1; j < nums.size();j++) {
            if (nums[i] == nums[j]) {
                return true;
            }
        }
    }
    return false;
}

bool optimized(const std::vector<int> &nums) {
    std::unordered_set<int> frequency;
    for(auto &num:nums) {
        if(frequency.find(num) != frequency.end()) {
            // found duplicate
            return true;
        }
        else {
            frequency.insert(num);
        }
    }
    return false;
}


bool containsDuplicate(std::vector<int> & nums) {
    // return bruteForce(nums);
    return optimized(nums);
}


int main() {
    
    std::vector<int> nums {1,2,3,1};
    
    auto result = containsDuplicate(nums);
    std::cout << result;
    
    
}