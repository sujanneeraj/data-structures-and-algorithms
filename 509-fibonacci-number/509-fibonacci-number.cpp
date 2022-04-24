class Solution {
public:
    int fib(int n) {
        
    //   return recursiveApproach(n);
    //     return optimizedApproach(n);
        
        vector<int> dp(n+1, -1);
        if(n<=1) {return n;}
        
        dp[0] = 0;
        dp[1] = 1;
        
        
        memoization(dp, n);
        return dp[n];
        
    }
    
    
private:
    
   int memoization(vector<int> &dp, int n) {
       
       if(dp[n] != -1) {
           return dp[n];
       }
       return dp[n] = memoization(dp, n-1) +  memoization(dp, n-2);
       
          
   }
    
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