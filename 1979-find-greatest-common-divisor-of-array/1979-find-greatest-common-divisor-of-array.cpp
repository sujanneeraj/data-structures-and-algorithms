class Solution {
public:
    int findGCD(vector<int>& nums) {
        
        auto min_value = *std::min_element(nums.begin(),nums.end());
        auto max_value = *std::max_element(nums.begin(),nums.end());

        return gcd(min_value, max_value);
        
        
    }
    
    
    int gcd(int a, int b) {
        if(b==0){
            return a;
        }
        return gcd(b, a%b);
    }
};