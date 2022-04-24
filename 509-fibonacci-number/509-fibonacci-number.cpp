class Solution {
public:
    int fib(int n) {
        
       return recursiveApproach(n);
        
    }
    
    
private:
  int  recursiveApproach(int n) {
        if(n <= 1) {
            return n;
        }
        return recursiveApproach(n-1) + recursiveApproach(n-2);
    }

};