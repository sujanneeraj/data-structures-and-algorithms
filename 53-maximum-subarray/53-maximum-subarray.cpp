class Solution {
public:
    int maxSubArray(vector<int>& nums) {
   //  return bruteForce(nums);   
        return optimized(nums);
    }
    
private:
    
    int optimized(vector<int>& nums){
        int currentSum = nums[0];
        
        int max_sum = nums[0];
        for(int i=1; i < nums.size();i++) {
            currentSum = max(nums[i], currentSum + nums[i]);
            max_sum = max(currentSum, max_sum);
        }
        
        return max_sum;
    }
    
    int bruteForce(vector<int>& nums) {
        
        int maximumSum = INT_MIN;
        
        for(int i = 0; i < nums.size();i++) {
            int currentSum = nums[i];
            maximumSum = max(currentSum, maximumSum);
            for(int j=i+1; j < nums.size();j++) {
                currentSum += nums[j];
                if(currentSum > maximumSum) {
                    maximumSum = currentSum;
                }
            }
        }
        
        return maximumSum;
        
    }
};