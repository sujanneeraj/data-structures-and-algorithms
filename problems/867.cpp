#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> transpose(vector<vector<int>>& matrix) {
     
        int m = matrix.size();
        int n = matrix[0].size();
        vector<vector<int>> result(n, vector<int>(m));
        
        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                result[j][i] = matrix[i][j];
            }
        }
        
        return result;
        
    }


int main() {
    std::vector<std::vector<int>> original {{1,2,3}, {4,5,6}, {7,8,9}};
    
    auto result = transpose(original);
    
    for(int i = 0; i < result.size(); i++) {
            for(int j = 0; j < result[0].size(); j++) {
              std::cout << result[i][j] << " ";
            }
            std::cout << "\n";
        }
    
    return 0;
}