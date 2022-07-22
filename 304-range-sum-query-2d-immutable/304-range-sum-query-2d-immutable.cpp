class NumMatrix {
public:
    NumMatrix(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int columns = matrix[0].size();
        
        mat.resize(rows);
        for(int i = 0; i < rows;i++){
            mat[i].resize(columns);
        }
        
        
        for(int i = 0; i < rows; i++){
            int rowSum = matrix[i][0];
            mat[i][0] = rowSum;
            for(int j = 1; j < columns; j++) {
                rowSum+= matrix[i][j];
                mat[i][j]= rowSum;
                
            }
        }
        
        
        for(int j = 0; j < columns; j++){
            int columnSum = mat[0][j];
            for(int i = 1; i < rows; i++) {
                columnSum+= mat[i][j];
                mat[i][j]= columnSum;
            }
        }
        
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
     
        if(row1 == 0 && col1==0) {
            return mat[row2][col2];
        }
        else if(row1 == 0){
            return mat[row2][col2] - mat[row2][col1-1];
        }
        else if(col1 == 0) {
            return mat[row2][col2] - mat[row1-1][col2];
        }
        else {
            return mat[row2][col2]  - mat[row1-1][col2] - mat[row2][col1-1] + mat[row1-1][col1-1];
        }
        
    }
private:
    vector<vector<int>> mat;
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */