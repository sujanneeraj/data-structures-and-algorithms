class Solution {
public:
    int maximumGap(vector<int>& nums) {
        
        
        if(nums.size() < 2) {
            return 0;
        }
        sort(nums.begin(), nums.end());
        int max_difference = INT_MIN;
        
        
        for(int i=1; i < nums.size(); i++){
            int difference = nums[i] - nums[i-1];
            if(difference > max_difference) {
                max_difference = difference;
            }
                
        }
        return max_difference;
        
    }
};