class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        
         if(nums.size() == 0) {
            vector<int> temp{-1,-1};
             return temp;
        }
        int index = binarySearch(nums, 0, nums.size()-1, target);
        vector<int> result;
        if(index == -1) {
            return  {-1, -1};
        }
        
        int secondIndex = index;
        while(secondIndex+1 < nums.size() and (nums[secondIndex+1] == target)) {
            secondIndex +=1;
        }
        
        while(index-1 >=0 and (nums[index-1] == target)) {
            index -=1;
        }
        
        return {index, secondIndex};
        
        
        
    }
    
    int binarySearch(vector<int> &nums, int low, int high, int target) {
        
       
        if(high >= low) {
            int middle = low + (high-low)/2;
        if(nums[middle] == target) {
            return middle;
        }
        else if(nums[middle] < target) {
            return binarySearch(nums, middle+1, high, target);
        }
        else {
            return binarySearch(nums, low, middle-1, target);
        }
        }
        
        
        return -1;
    }
};