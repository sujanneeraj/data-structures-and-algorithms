class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
        return Soln1(nums);
        
    }
    
    
private:
    int Soln1(vector<int>& nums) {
        unordered_map<int, int> counter;
        
        for(int i = 0; i < nums.size(); i++) {
            if(counter.find(nums[i]) != counter.end()) {
                counter[nums[i]] +=1;
            }
            else {
                counter[nums[i]] = 1;
            }
        }
        
    
        for(auto &val : counter) {
            if(val.second == 1) {
                return val.first;
            }
           
        }
        
        return -1;
        
        
        
    }
};