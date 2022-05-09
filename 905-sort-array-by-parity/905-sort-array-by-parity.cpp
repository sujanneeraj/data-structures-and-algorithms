class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        
        vector<int> evenNumbers;
        vector<int> oddNumbers;
        
        for(const auto &num: nums) {
            if(num%2 == 0) {
                evenNumbers.push_back(num);
            }
            else {
                oddNumbers.push_back(num);
            }
        }
        
        for(int i = 0; i < oddNumbers.size(); i++) {
            evenNumbers.push_back(oddNumbers[i]);
        }
        
        return evenNumbers;
    }
};