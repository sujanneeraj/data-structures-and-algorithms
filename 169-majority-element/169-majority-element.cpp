class Solution {
public:
    int majorityElement(vector<int>& nums) {
     
        int n = nums.size();
        int nTimes = floor(n/2);
        unordered_map<int, int> counter;
        
        for(int i = 0; i < n; i++) {
            if(counter.find(nums[i]) != counter.end()) {
                counter[nums[i]] += 1;
            }
            else {
                counter[nums[i]] = 1;
            }
                
            
        }
        
        
        for(auto &[key, value]: counter) {
            if(value > nTimes) {
                return key;
            }
        }
        
        return -1;
        
        
    }
};