class Solution {
public:
    int fib(int n) {
        
    //   return recursiveApproach(n);
        return optimizedApproach(n);
        
    }
    
    
private:
    
   int optimizedApproach(int n) {
       if(n<=1) {
           return n;
       }
       vector<int> dp(n+1, 0);
       dp[0] = 0;
       dp[1] = 1;
       for(int i = 2; i <dp.size(); i++) {
           dp[i] = dp[i-1] + dp[i-2];
       }
       
       return dp[dp.size()-1];
   } 
    
    
  int  recursiveApproach(int n) {
        if(n <= 1) {
            return n;
        }
        return recursiveApproach(n-1) + recursiveApproach(n-2);
    }

};