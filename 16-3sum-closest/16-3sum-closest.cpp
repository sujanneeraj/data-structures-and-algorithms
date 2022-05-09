class Solution {
public:
    
    int bruteForceApproach(vector<int>& nums, int target) {
        int closest = INT_MAX;
        int res;
        for(int i = 0; i < nums.size()-2; i++  ){
            for(int j = i+1; j < nums.size()-1; j++) {
                for(int k = j+1; k < nums.size(); k++) {
                    int currentSum = nums[i] + nums[j] + nums[k];
                    int distance = abs(target-currentSum);
                    if(distance < closest) {
                        closest = distance;
                        res  = currentSum;
                    }
                }
            }
        }
        
        return res;
    }
    
    
    int optimizedApproach(vector<int> &nums, int target) {
        sort(nums.begin(), nums.end());
            int closest = INT_MAX;
            int res;
            for(int i = 0; i < nums.size() - 1; i++) {
                int j = i+1;
                int k = nums.size() -1;
                while(j < k) {
                    int currentSum = nums[i] + nums[j] + nums[k];
                    if(currentSum > target) {
                        k--;
                    }
                    else if(currentSum < target) {
                        
                        j++;
                    }
                    else if(currentSum == target) {
                        return currentSum;
                    }
                    
                    int distance = abs(target-currentSum);
                     if(distance < closest) {
                        closest = distance;
                        res  = currentSum;
                    }
                }
            }
            
     return res;   
    }
    
    int threeSumClosest(vector<int>& nums, int target) {
       // return bruteForceApproach(nums, target);
        return optimizedApproach(nums, target);
    }
};