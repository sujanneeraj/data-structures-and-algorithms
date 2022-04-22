class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        
        
        int n = nums.size();
        int nTimes = floor(n/3);
        vector<int> result;
        unordered_map<int, int> count;
        
        for(int i = 0; i < n; i++) {
            
            int currentElement = nums[i];
            if(count.find(currentElement) != count.end()) {
               count[currentElement] +=1; 
            } 
            else {
                count[currentElement] = 1;
            }
        }
        
        for(auto & [key, value] : count) {
            if(value > nTimes) {
                result.push_back(key);
            }
        }
        
        return result;
    }
};