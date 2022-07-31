class Solution {
public:
    int uniquePaths(int m, int n) {
     
        int X = m-1;
        int Y = n-1;
        
        long ans = 1;
        
        if(X > Y){
            int temp = Y;
            Y = X;
            X = temp;
        }
        
        for(int i = 1; i <=X; i++) {
            ans = (ans * (Y+i))/i;
        }
        
        return (int)ans;
        
        
    }
};