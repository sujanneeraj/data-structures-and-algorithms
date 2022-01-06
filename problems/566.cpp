#include <iostream>
#include <vector>

using namespace std;


vector<vector<int>> solution1(vector<vector<int>>& mat, int r, int c) {
        int m = mat.size();
        int n = mat[0].size();
        
        if(m * n != r * c) {
            return mat;
        }
        
        // convert mxn into 1x mxn
        std::vector<int> intermediate(m*n);
        std::vector<std::vector<int>> result(r, std::vector<int>(c));
        
        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                int k = i*n +j;
                intermediate[k] = mat[i][j];
            }
        }
        
        for(int k = 0; k < intermediate.size(); k++) {
            int i = k/c;
            int j = k%c;
            result[i][j] = intermediate[k];
        }
        
        return result;
    }
    
vector<vector<int>> optimized(vector<vector<int>>& mat, int r, int c) {
        int m = mat.size();
        int n = mat[0].size();
        
        if(m * n != r * c) {
            return mat;
        }
        
        // convert mxn into 1x mxn
        std::vector<std::vector<int>> result(r, std::vector<int>(c));
        
        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                int k = i*n +j;
                int p = k/c;
                int q = k%c;
                result[p][q] = mat[i][j];
            }
        }
        
        
        
        return result;
    }
    
int main() {
    std::vector<std::vector<int>> original {{1,2}, {3,4}};
    int r=1;
    int c=4;
    
    auto result = optimized(original, r, c);
    
    for(int i = 0; i < result.size(); i++) {
        for(int j = 0; j < result[0].size(); j++) {
            std::cout << result[i][j] << " ";
        }
        std::cout << "\n";
    }
}