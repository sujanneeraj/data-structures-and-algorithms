class Solution {
public:
    int countPoints(string rings) {
        
        
        unordered_map<int, vector<int>> visited;
        
        std::unordered_map<char, int> colors(
    {
    { 'R', 0 },
    { 'G', 1 },
    { 'B', 2 } });
        int n = rings.length()/2;
        
        
        int ans = 0;
        for(int i = 0; i < rings.length(); i+=2) {
            
            char color = rings[i];
            char rodC = rings[i+1];
            int rod = rodC- 48;
            
            
            int color_mapping = colors[color];
            
            if(visited.find(rod) == visited.end()) {
                vector<int> rgb(3,0);
                 visited[rod] = rgb;
            }
            
            visited[rod][color_mapping] +=1;
                    
            
        }
        
        
        for(int i = 0; i < rings.length(); i++) {
            
            if(visited.find(i) != visited.end()) {
             
                auto ring = visited[i];
            
            if(ring[0] > 0 && ring[1] > 0 && ring[2] > 0) {
                ans +=1;
            }
                
            }
            
            
        }
        
        return ans;
        
    }
};