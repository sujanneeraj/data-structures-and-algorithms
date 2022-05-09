class Solution {
public:
    bool isPalindrome(int x) {
        
        vector<int> digits;
        if(x < 0) {
            return false;
        }
        
        int number = x;
        while(number >= 1) {
            int remainder = number%10;
            number = number/10;
            digits.push_back(remainder);
        }
        
        reverse(digits.begin(), digits.end());
        
        int i = 0;
        int j = digits.size() - 1;
        
        while(i < j) {
            if(digits[i] != digits[j]) {
                return false;
            }
            i++;
            j--;
        }
        
        return true;
        
        
        
    }
};