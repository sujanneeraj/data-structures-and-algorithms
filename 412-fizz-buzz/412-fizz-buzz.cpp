class Solution {
public:
    vector<string> fizzBuzz(int n) {
     
        vector<string> result;
        
        for(int i = 1; i<=n; i++) {
            if(i%3 == 0 and i%5 == 0) {
                result.push_back("FizzBuzz");
            }
            else if(i%3 == 0) {
                result.push_back("Fizz");
            }
            else if(i%5 == 0) {
                result.push_back("Buzz");
            }
            else {
                
                string res = to_string(i);
                
                result.push_back(res);
            }
        }
        
        return result;
    }
};