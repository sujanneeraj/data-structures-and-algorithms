class Solution {
public:
    int trap(vector<int>& height) {
        
        return Soln2(height);
        
    }
    
private:
    
    int Soln2(vector<int>& height) {
        vector<int> leftMax(height.size(),0);
         vector<int> rightMax(height.size(),0);
        
        leftMax[0] = height[0];
        rightMax[height.size()-1] = height[height.size()-1];
        
        int leftSeenSoFar = 0;
        for(int i = 1; i < height.size(); i++){
            
            leftMax[i] = max(leftMax[i-1], height[i]);;
        }
        
        int rightSeenSoFar = height[height.size()-1];;
        for(int i = height.size()-2; i >= 0; i--){
            
            rightMax[i] = max(rightMax[i+1], height[i]);;
        }
        
        int result = 0;
        
        for(int i = 0; i < height.size(); i++) {
            result += min(leftMax[i], rightMax[i]) - height[i];
        }
        return result;
        
    }
    
    int Soln1(vector<int>& height) {
        
        int n = height.size();
        int result = 0;
        
        
        for(int i = 1; i < n; i++) {
            int left = height[i];
            
            for(int j = 0; j < i;j++) {
                left = max(left, height[j]);
            }
            
            int right = height[i];
            
            for(int j=i+1; j < n; j++) {
                right = max(right, height[j]);
            }
            
            result += min(left, right) - height[i];
        }
        
        return result;
        
        
    }
};