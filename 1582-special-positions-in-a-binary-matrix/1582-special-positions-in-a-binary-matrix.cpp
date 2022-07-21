class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
     
        int result = 0;
        vector<int> rowValues;
        vector<int> columnValues;
        
        for(int i = 0; i < mat.size(); i++) {
            int numberOnes = 0;
            for(int j = 0; j < mat[0].size(); j++) {
                numberOnes += mat[i][j];
            }
            rowValues.push_back(numberOnes);
        }
        
        for(int j = 0; j < mat[0].size(); j++) {
            int numberOnes = 0;
            for(int i = 0; i < mat.size(); i++) {
                numberOnes += mat[i][j];
            }
            columnValues.push_back(numberOnes);
        }
        
        for(int i = 0; i < mat.size(); i++) {
            int numberOnes = 0;
            for(int j = 0; j < mat[0].size(); j++) {
                if((mat[i][j] == 1) && (rowValues[i] == 1) && (columnValues[j] == 1)) {
                    result +=1;
                }
            }
            
        }
        
        return result;
        
        
    }
};