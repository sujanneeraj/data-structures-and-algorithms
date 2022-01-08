#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> generateMatrix(int n) {
        
        int direction = 0;
        int left = 0;
        int right = n-1;
        int top = 0;
        int bottom = n-1;
        
        int current_value = 0;
        
        vector<vector<int>> result(n, vector<int>(n)); 
        while(top <= bottom && left <=right){
            
            if(direction == 0) {
                for(int i=left; i<=right;i++) {
                    current_value +=1;
                    result[top][i] = current_value;
                }
                
                top +=1;
            }
            else if(direction == 1) {
                for(int i = top; i <=bottom;i++) {
                   
                    current_value +=1;
                    result[i][right] = current_value;
                    // result.push_back(current_value);
                }
                
                right -=1;
            }
            else if(direction == 2) {
                for(int i = right; i >= left; i--) {
                    current_value +=1;
                    result[bottom][i] = current_value;
                }
                bottom -=1;
            }
            
            else if(direction == 3) {
                for(int i=bottom; i>=top; i--) {
                    current_value +=1;
                    result[i][left] = current_value;
                }
                
                left +=1;
            }
            
            direction = (direction+1)%4;
        }
        
        return result;
        
         
    }
    
    int main() {
        auto result = generateMatrix(3);
        
        for(int i = 0; i < 3; i++) {
            for(int j = 0; j < 3; j++) {
                std::cout << result[i][j] << " ";
            }
            std::cout << std::endl;
        }
    }