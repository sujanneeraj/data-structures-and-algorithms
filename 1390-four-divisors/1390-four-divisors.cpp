class Solution {
public:
    
    
    int numberOfDivisors(int n) {
        int count = 0;
        int sum = 0;
        for(int i = 1; i<=sqrt(n);i++){
            if(n%i==0){
                
                if (n/i == i){
                    
                    
                    count+=1;
                    sum+=i;
                }
                else{
                    count+=2;
                    sum+=(i);
                    sum+=(n/i);
                }
              
                
            }
        }
        if(count == 4){
            return sum;
        }
        
        return 0;
    }
    
    int sumFourDivisors(vector<int>& nums) {
     
        int result = 0;
        for(auto &num: nums) {
            result += numberOfDivisors(num);
        }
        
        return result;
        
        
    }
};