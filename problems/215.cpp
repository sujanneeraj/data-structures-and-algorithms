#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

 int findKthLargest(vector<int>& nums, int k) {
        
        sort(nums.begin(), nums.end());
        int index = nums.size() - k;
        
        return nums[index];
        
    }
    

int main() {
    std::vector<int> nums {3,2,1,5,6,4};
    int k=2;
    
    auto result = findKthLargest(nums, k);
    
    std::cout << result;
}