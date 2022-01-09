#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;


   int twoPointer(vector<int>& nums, int k) {
        int i = 0; 
        int j = nums.size()-1;
        int max_sum = -1;
        sort(nums.begin(), nums.end());
        while(i <j) {
            int value = nums[i] + nums[j];
            if(value < k) {
                if(value > max_sum) {
                    max_sum = value;
                }
                i++;
            }
            else if(value >=k) {
                j--;
            }
        }
        return max_sum;
    }
    
     int bruteForce(vector<int>& nums, int k) {
           int max_sum = -1;
        for(int i = 0; i < nums.size(); i++) 
            for(int j = i+1; j < nums.size(); j++) {
                int sum = nums[i] + nums[j];
                
                if(sum < k) {
                    if(sum > max_sum) {
                        max_sum = sum;
                    }
                }
            }
        
        return max_sum;
    }
    
    int twoSumLessThanK(vector<int>& nums, int k) {
       // return bruteForce(nums, k);
      
        return twoPointer(nums, k);
    }
    
int main() {
    std::vector<int> nums {34,23,1,24,75,33,54,8};
    
    auto result = twoSumLessThanK(nums, 60);
    
    std::cout << "MAX SUM " << result;
}