class Solution {
public:
    
    
    void backtracking(vector<int> &nums, int n, vector<int> &partialSolutions, vector<vector<int>> & allSolutions) {
        
        if(n == 0) {
            allSolutions.push_back(partialSolutions);
        } else {
            
            int idx = n-1;
            // w/o
            backtracking(nums, n-1, partialSolutions, allSolutions);
            
            // with
            
            partialSolutions.push_back(nums[idx]);
            backtracking(nums, n-1, partialSolutions, allSolutions);
            partialSolutions.pop_back();
            
        }
        
        
        
        
        
        
    }
    
    vector<vector<int>> subsets(vector<int>& nums) {
        
        vector<vector<int>>  allSolutions;
        vector<int> partialSolutions;
        backtracking(nums, nums.size(), partialSolutions, allSolutions);
        
        return allSolutions;
        
    
    }
};