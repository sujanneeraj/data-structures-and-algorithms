class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        
       vector<vector<int>> result(n, vector<int> (n, 0));
        
        int top = 0;
        int left = 0;
        int bottom = n-1;
        int right = n-1;
        
        int direction = 0;
        int number = 1;
        while(top <= bottom && left <= right ) {
            
            
            if(direction == 0) {
                
                for(int i = left; i <=right; i++){
                    result[top][i] = number;
                    number +=1;
                }
                
                top +=1;
            }
            
            if(direction == 1) {
                
                for(int i =top; i <=bottom; i++) {
                    result[i][right] = number;
                    number+=1;
                }
                
                right -=1;
            }
            
            if(direction == 2) {
                for(int i = right; i>=left;i--){
                    result[bottom][i] = number;
                    number +=1;
                }
                
                bottom -=1;
            }
            
            if(direction == 3) {
                for(int i = bottom; i>=top; i--) {
                    result[i][left] = number;
                    number+=1;
                }
                left+=1;
            }
            
            
            
            
            direction = (direction+1)%4;
            
            
        }
        
        return result;
    }
};