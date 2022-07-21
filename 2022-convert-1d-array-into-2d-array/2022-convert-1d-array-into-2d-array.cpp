class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
     
        vector<vector<int>> result(m, vector<int>(n));
        
        if(original.size() != m*n) {
            return  {};
        }
        
        for(int i =0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                int k = i*n+j;
                result[i][j] = original[k];
            }
        }
        
        return result;
        
    }
};