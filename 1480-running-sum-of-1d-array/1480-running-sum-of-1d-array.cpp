class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        
        vector<int> result{nums[0]};
        
        for(int i = 1; i < nums.size(); i++) {
            int currentSum = result[i-1] + nums[i];
            result.push_back(currentSum);
        }
        
        return result;
    }
};