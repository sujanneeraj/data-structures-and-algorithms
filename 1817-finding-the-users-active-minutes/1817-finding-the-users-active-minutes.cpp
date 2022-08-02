class Solution {
public:
    vector<int> findingUsersActiveMinutes(vector<vector<int>>& logs, int k) {
     
        unordered_map<int, unordered_set<int>> visited;
        
        int n = logs.size();
        
        for(int i = 0; i < n; i++){
            int user = logs[i][0];
            int time = logs[i][1];
            
            if (visited.find(user) != visited.end()) {
                
                if(visited[user].find(time) == visited[user].end()) {
                     visited[user].insert(time);
                }
               
            }
            else {
                unordered_set<int> set( {time});
                visited[user] = set;
            }
        }
        
        
        vector<int> result (k, 0);
        
        for(auto& vis: visited) {
            
            auto length = vis.second.size();
            result[length-1] +=1;
        }
        
        return result;
        
        
        
        
    }
};