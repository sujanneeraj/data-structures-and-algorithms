class Solution {
public:
    
    int f(int n, vector<int> &nums) {
        if (n==0) {
            return nums[n];
        }
        if(n < 0) {
            return 0;
        }
        
        return max( nums[n] + f(n-2, nums), f(n-1, nums));
        
    }
    
    
    int optimizedApproach(int n, vector<int> &nums, vector<int> &dp) {
        
         dp[0] = nums[0];
        
         int neg = 0;
        
        for(int i = 1; i < n; i++) {
            
            int pick  =  nums[i];
            if( i > 1) {
                pick += dp[i-2];
            }
            
            int nonPick = 0 + dp[i-1];
            
            dp[i]=max(pick, nonPick);
            
        }
        
        return dp[n-1];
        
        
        
    
        
        
        
        
        
    }
    
    int rob(vector<int>& nums) {
        int n = nums.size();
        //return f(n-1, nums);
        
        vector<int> dp(n, -1);
        return optimizedApproach(n, nums, dp);
        
    }
};