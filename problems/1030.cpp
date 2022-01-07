#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<vector<int>> allCellsDistOrder(int rows, int cols, int rCenter, int cCenter) {
        
        std::vector<std::vector<int>> result(rows*cols, std::vector<int>(2));
        
        for(int i=0; i < rows; i++){
            for(int j=0; j < cols; j++) {
                int k = i*cols +j;
                result[k][0] = i;
                result[k][1] = j;
            }
        }
        
        sort(result.begin(), result.end(), [&](std::vector<int> a, std::vector<int>b) {
            int d1 = abs(a[0] - rCenter) + abs(a[1] - cCenter);
            int d2 = abs(b[0] - rCenter) + abs(b[1] - cCenter);
            return d1 < d2;
        });
            
            return result;
        
    }
    
    
int main() {
    
    int rows = 1, cols = 2, rCenter = 0, cCenter = 0;
    
    auto result = allCellsDistOrder(rows, cols, rCenter, cCenter);
    
    for(auto &res: result) {
        std::cout << res[0] << " " << res[1] << std::endl;
    }
}