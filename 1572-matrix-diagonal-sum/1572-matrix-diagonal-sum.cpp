class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
     
        int m = mat.size() -1;
        int n = mat[0].size() - 1;
        
        int running_sum = 0;
        for(int i=0; i <=m;i++){
            running_sum += mat[i][i];
        }
        
        int i = 0;
        int j = n;
        while(j>=0 && i <= m){
            if(i!=j){
                running_sum += mat[i][j];
            }
            i+=1;
            j-=1;
        }
        return running_sum;
    }
};