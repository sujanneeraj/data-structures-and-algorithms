#include <iostream>
#include <vector>

using namespace std;


 vector<int> spiralOrder(vector<vector<int>>& matrix) {
        
        int direction = 0;
        int rows = matrix.size();
        int cols = matrix[0].size();
            
        int top = 0, left = 0;
        int bottom = rows - 1;
        int right = cols - 1;
        
        vector<int> result;
        
        while((top <= bottom) && (left <= right)){
            
            if(direction == 0) {
                for(int i = left; i <=right; i++) {
                result.push_back(matrix[top][i]);
            }
            top +=1;
            }
            else if(direction == 1) {
                for(int i = top; i <= bottom; i++) {
                    result.push_back(matrix[i][right]);
                }
                right -=1;
                
            }
            
            else if(direction == 2) {
                
                for(int i =right; i >= left; i--) {
                    result.push_back(matrix[bottom][i]);
                }
                bottom -=1;
                
            }
            else if(direction == 3) {
                
                for(int i=bottom; i>= top; i--) {
                    result.push_back(matrix[i][left]);
                }
                left +=1;
            }
            
            direction = (direction+1)%4;
            
        }
        
        return result;
        
    }


int main() {
    
    std::vector<std::vector<int>> original {{2,5}, {8,4}, {0,-1}};
    
    auto result = spiralOrder(original);
    
    for(auto &r: result) {
        std::cout <<  r <<  " ";
    }
    
}