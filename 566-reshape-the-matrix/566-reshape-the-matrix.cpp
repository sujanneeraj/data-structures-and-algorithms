class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
          
        int m = mat.size();
        int n = mat[0].size();
        
        if(m*n != r*c) {
            return mat;
        }
        
        vector<int> temp(m*n,0);
        
        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                int index = i*n + j;
                temp[index] = mat[i][j];
            }
        }
        
        
        vector<vector<int>> result(r, vector<int>(c));
        
        for(int i = 0; i < r; i++) {
            for(int j = 0; j < c; j++) {
                int index = i*c +j;
                result[i][j] = temp[index]; 
            }
        }
        
        
        return result;
    }
};