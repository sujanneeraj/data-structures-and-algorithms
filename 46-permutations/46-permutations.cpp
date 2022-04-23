class Solution {
public:
    
    void recursive( int index,vector<int>& nums, vector<vector<int>> &ans) {
        
        // lead node
        if(index == nums.size()) {
            ans.push_back(nums);
            return;
        }
        
        for(int i = index; i<nums.size(); i++) {
            swap(nums[index], nums[i]);
            recursive(index+1, nums, ans);
            swap(nums[index], nums[i]);
        }
        
    }
    
    vector<vector<int>> permute(vector<int>& nums) {
     
        vector<vector<int>> ans;
        recursive(0, nums, ans);
        return ans;
        
    }
    
    
};