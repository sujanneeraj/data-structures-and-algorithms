class Solution {
public:
    bool isCovered(vector<vector<int>>& ranges, int left, int right) {
        
        for(int num = left; num<=right; num++) {
            bool status = false;
            for(int i = 0; i < ranges.size(); i++) {
                
                int l = ranges[i][0];
                int r = ranges[i][1];
                
                if ((l <= num && num <= r)) {
                    status = true;
                    continue;
                    
                } 
                
                
            }
            
            if(status == false) {
                return false;
            }
            
            
            
        }
        
        return true;
        
    }
};