 #include<iostream>
 #include <vector>
 
 using namespace std;
 
 vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
     
    if(m*n != original.size()) {
        return vector<vector<int>>();
    }
    //return vector<string>();    
    vector<vector<int>> result(m, std::vector<int>(n));
     
   for(int i = 0; i < m; i++) {
       for(int j = 0; j < n; j++) {
           int currentIndex = i*n + j;
           result[i][j] = original[currentIndex];
       }
   }
        return result;
    }
    
int main() {
    std::vector<int> original {1,2,3};
    int m = 1;
    int n = 3;
    auto result = construct2DArray(original, m, n);
    
    for(int i = 0; i < m; i++) {
       for(int j = 0; j < n; j++) {
           
           std::cout << result[i][j] <<" "; 
       }
       std::cout << "\n";
   }
}