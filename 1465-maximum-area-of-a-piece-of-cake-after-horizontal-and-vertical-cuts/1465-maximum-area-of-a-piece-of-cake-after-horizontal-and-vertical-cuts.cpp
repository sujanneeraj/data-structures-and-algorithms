class Solution {
public:
    int maxArea(int h, int w, vector<int>& horizontalCuts, vector<int>& verticalCuts) {
        sort(horizontalCuts.begin(), horizontalCuts.end());
        sort(verticalCuts.begin(), verticalCuts.end());
        
        int horMax = horizontalCuts[0];
        
        int verMax = verticalCuts[0];
        int difference;
        
        
        
        for(int i=0; i < horizontalCuts.size(); i++){
            if(i==horizontalCuts.size()-1){
                difference = h - horizontalCuts[i];
            }
            else {
                difference =horizontalCuts[i+1] - horizontalCuts[i];
            }
            
            horMax = max(horMax, difference );
        }
        
        
        for(int i=0; i < verticalCuts.size(); i++){
            if(i==verticalCuts.size()-1){
                difference = w - verticalCuts[i];
            }
            else {
                difference = verticalCuts[i+1] - verticalCuts[i];
            }
            
            verMax = max(verMax, difference );
        }
        
        return (1LL*horMax * verMax)%(1000000007);
    }
};