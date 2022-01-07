#include <iostream>
#include <vector>

using namespace std;

 bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        
        for(int i=1; i < m; i++) {
            for(int j=1; j < n;j++){
                if (matrix[i][j] != matrix[i-1][j-1]) {
                    return false;
                }
            }
        }
        return true;
    }
    
int main() {
    std::vector<std::vector<int>> mat{{1,2,3,4}, {5,1,2,3}, {9,5,1,2}};
    
    auto result = isToeplitzMatrix(mat);
    
    std::cout << result;
}