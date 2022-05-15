class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
     
        
        unordered_map<string,int> visited;
        
        for(int i = 0; i < paths.size(); i++) {
            string source = paths[i][0];
            string destination = paths[i][1];
            
            if(visited.find(source) == visited.end()) {
                visited[source] =1;
            }
            else if(visited.find(source) != visited.end()) {
                visited[source] +=1;
            }
            
            if(visited.find(destination) == visited.end()) {
                visited[destination] = 0;
            }
            
            
        }
        
        string result;
        for(const auto&cities: visited) {
            if(cities.second ==0) {
                result = cities.first;
            }
        }
        
        return result;
    }
};