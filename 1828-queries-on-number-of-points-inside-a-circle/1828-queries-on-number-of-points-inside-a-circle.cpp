class Solution {
public:
    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {
        
        vector<int> result;
        
        for(int i = 0; i < queries.size(); i++) {
            int h = queries[i][0];
            int k = queries[i][1];
            int r = queries[i][2];
            
            int nPoints = 0;
            for(int j = 0; j < points.size(); j++) {
                
                int x = points[j][0];
                int y = points[j][1];
                
                int a = pow(x-h,2);
                int b = pow(y-k,2);
                float distance = sqrt(a + b);
                    
                if(distance <=r){
                    nPoints +=1;
                }
            }
            result.push_back(nPoints);
            
            
            
            
        }
        return result;
        
    }
};