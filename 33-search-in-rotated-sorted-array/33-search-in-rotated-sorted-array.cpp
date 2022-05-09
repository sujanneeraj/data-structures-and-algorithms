class Solution {
public:
    
    int linearScan(vector<int>& nums, int target) {
        int result = -1;
        
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] == target) {
                return i;
            }
        }
        
        return result;
    }
    
    int search(vector<int>& nums, int target) {
        return linearScan(nums, target);
    }
};