class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        
      int carry = 0;
    std::vector<int> result;
    int current_sum;
    for(int i = digits.size()-1; i>=0; i--) {
        if(i == digits.size()-1) {
           current_sum = digits[i] + 1;
        }
        else {
            current_sum = digits[i]  + carry;
        }

        int res = current_sum%10;
        carry = int(current_sum/10);
        result.push_back(res);
    }

    if(carry > 0) {
        result.push_back(carry);
    }

    reverse(result.begin(), result.end());

    return result;
    }
};