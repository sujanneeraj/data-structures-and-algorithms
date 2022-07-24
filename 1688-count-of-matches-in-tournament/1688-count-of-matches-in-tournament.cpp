class Solution {
public:
    int numberOfMatches(int n) {
        
        int numberOfMatches = 0;
        int count =0;;
        
        if(n == 1){
            return 0;
        }
        int x;
        int y;
        while(n != 1){
            if(n%2==0){
              x =n/2;
              n = n/2;
            }
            else{
                x = (n-1)/2;
                n = (n-1)/2 + 1;
                
            }
            
            count +=x;
        }
        
        return count;
    }
};