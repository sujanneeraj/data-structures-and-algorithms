#include <iostream>
#include <vector>

using namespace std;


int countNegatives(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int cnt = 0;
        
        for(int i = 0; i < m; i++) {
            int j = n-1;
            
            while(j >= 0 && grid[i][j] < 0) {
                
                cnt +=1;
                j--;
            }
        }
        
        return cnt;
        
    }
    
    
int main() {
    
    std::vector<std::vector<int>> grid {{4,3,2,-1},  {3,2,1, -1}, {1,1,-1,-2}, {-1,-1,-2,-3}};
    auto count = countNegatives(grid);
    
    std::cout << "count " << count;
}