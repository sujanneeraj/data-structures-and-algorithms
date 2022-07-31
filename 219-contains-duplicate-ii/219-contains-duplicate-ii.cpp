class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
      //   return bruteForce(nums, k);
        return optimizedApproach(nums, k);
    }
    
    
    bool optimizedApproach(vector<int>& nums, int k) {
        
        unordered_set<int> visited;
        
        for(int i=0; i <=k && i < nums.size();++i){
            if(visited.find(nums[i]) != visited.end()){
                return true;
            }
            visited.insert(nums[i]);
        }
        
        
        for(int i = k+1; i < nums.size(); i++){
            
            visited.erase(abs(nums[i-k-1]));
            
            if(visited.find(nums[i]) != visited.end()){
                return true;
            }
            else {
                visited.insert(nums[i]);
            }
        }
        
        return false;
        
        
    }
    
    bool bruteForce(vector<int>& nums, int k){
        for(int i = 0; i < nums.size();i++){
            for(int j = i+1; j < nums.size(); j++) {
                if((nums[i] == nums[j]) && abs(i-j)<=k){
                    return true;
                }
            }
        }
        
        return false;
    }
};