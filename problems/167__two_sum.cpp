#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

    
vector<int> preSorting(std::vector<int> nums, int target) {
       // sort(nums.begin(), nums.end());
        int i = 0;
        int j = nums.size() - 1;
        
        while (i < j) {
            if(nums[i]+nums[j] == target) {
                return std::vector<int> {i+1,j+1};
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
    
    return preSorting(numbers, targetSum);
    
}


int main() {
    
    std::vector<int> numbers {2, 7, 11, 15};
    int targetSum = 9;
    
    auto result = twoNumberSum(numbers, targetSum);
    
    for(auto &num : result) {
        std::cout << num << "\t";
    }
    
    
    
}