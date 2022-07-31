class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        
        double average;
        double runningSum = 0;
        for(int i = 0; i < k;i++){
            runningSum += nums[i];
        }
        
        average = runningSum/k;
        double max_average = average;
        for(int i = k; i<nums.size(); i++) {
            double currentSum = average  * k;
            currentSum = currentSum -  nums[i-k] + nums[i];
            average = currentSum/k;
            
            max_average = max(max_average, average);
        }
        
        return max_average;
    }
};