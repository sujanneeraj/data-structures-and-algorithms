#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;


vector<int> bruteForce(std::vector<int> nums, int target) {
        for(int i = 0; i < nums.size(); ++i) {
            for(int j =i+1; j < nums.size(); ++j) {
                if(nums[i] + nums[j] == target) {
                    return std::vector<int> {i, j};
                }
            }
        }
        return std::vector<int> {-1,-1};
    }
    
    vector<int> optimized(std::vector<int> nums, int target) {
        std::map<int, int> mapping;
        for(int i = 0; i < nums.size(); i++) {
            auto it = mapping.find(target-nums[i]);
            if(it != mapping.end()) {
                std::vector<int> v {i, mapping[target-nums[i]]};
                return v;
            } else{
                mapping[nums[i]] = i;
            }
        }
        return std::vector<int> {-1,-1};
    }
    
    vector<int> preSorting(std::vector<int> nums, int target) {
        sort(nums.begin(), nums.end());
        int i = 0;
        int j = nums.size() - 1;
        
        while (i < j) {
            if(nums[i]+nums[j] == target) {
                return std::vector<int> {i,j};
            }
            else if(nums[i] + nums[j] < target) {
                i++;
            }
            else if(nums[i] + nums[j] > target) {
                j--;
            }
        }
        return std::vector<int> {-1,-1};
    }
    

std::vector<int> twoNumberSum(std::vector<int> numbers, int targetSum) {
    
    return optimized(numbers, targetSum);
    
}


int main() {
    
    std::vector<int> numbers {3,5,-4, 8,11,1,-1,6};
    int targetSum = 10;
    
    auto result = twoNumberSum(numbers, targetSum);
    
    for(auto &num : result) {
        std::cout << num << "\t";
    }
    
    
    
}