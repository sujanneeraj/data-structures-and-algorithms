#include <iostream>
#include <vector>

using namespace std; 

int diagonalSum(vector<vector<int>>& mat) {
        int n = mat.size();
        int sum = 0;
        for(int i=0; i< n; i++) {
            sum += mat[i][i];
        }
        
        for(int i=n-1;i>=0;--i){
            
            
            
            sum += mat[n-1-i][i];
            
            
            
        }
        
        if(n%2 != 0) {
            int temp = n/2;
            sum -= mat[temp][temp];
        }
        
        return sum;
    }
    
int main(){
    
    std::vector<std::vector<int>> mat {{1,2,3}, {4,5,6}, {7,8,9}};
    auto result = diagonalSum(mat);
    
    std::cout << "result" << result;
     
    
}