class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
     
    //    return bruteForce(matrix, target);
        return approachOne(matrix, target);
        
    }
    
    
    bool approachOne(vector<vector<int>>& matrix, int target) {
        int row = 0;
        int column = matrix[0].size()-1;
        
        while(row <= matrix.size()-1 && column >= 0) {
            if(matrix[row][column] == target){
                return true;
            }
            else if(target > matrix[row][column]) {
                row++;
            }
            else if(target < matrix[row][column]) {
                column--;
            }
        }
        return false;
    }
    
    
    bool bruteForce(vector<vector<int>>& matrix, int target) {
        
        
        for(int i =0; i < matrix.size(); i++) {
            for(int j=0; j < matrix[0].size(); j++) {
                if(matrix[i][j] ==target){
                    return true;
                }
            }
        }
        return false;
    }
};