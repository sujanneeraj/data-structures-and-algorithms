class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        unordered_map<int, int> visited;
        
        for(int i = 0; i < nums.size(); i++) {
            
            auto numbertoFind = target - nums[i];
            if(visited.find(numbertoFind) != visited.end()) {
                return  {i, visited[numbertoFind]};
            }
            else {
                visited[nums[i]] = i;
            }
        }
        
        
        return {-1,-1};
        
    }
};