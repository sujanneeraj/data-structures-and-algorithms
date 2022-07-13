class Solution {
public:
    
    int fun(vector<int>& arr, int n) { 
        int max_sum = arr[0], min_sum = arr[0];  
        for (int i = 0; i < n; i++) { // Finding max and min sum value 
            max_sum=max(max_sum,arr[i]);
            min_sum=min(min_sum,arr[i]);
        } 
        return (max_sum-min_sum); 
    } 
    
    
    int maxAbsValExpr(vector<int>& arr1, vector<int>& arr2) {
        int max_number = INT_MIN;
         vector<int> exp1;
         vector<int> exp2;
        vector<int> exp3;
        vector<int>  exp4;
        int n = arr1.size();
        for(int i=0; i < arr1.size(); i++) {
            
            exp1.push_back(arr1[i] + arr2[i] +i);
            exp2.push_back( arr1[i] + arr2[i] -i );
            exp3.push_back(arr1[i] - arr2[i] + i);
            exp4.push_back(arr1[i] - arr2[i] - i);
            
            
            
            
        }
        
   
        return max(max(fun(exp1,n),fun(exp3,n)),max(fun(exp2,n),fun(exp4,n)));
        
       
        
    }
};