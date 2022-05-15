class Solution {
public:
    int minOperations(vector<string>& logs) {
        
        stack<string> S;
        
        for(int i = 0; i < logs.size(); i++){
            
            string currentString = logs[i];
            
            if(currentString == "../" && !S.empty()) {
                S.pop();
            }
            else if(currentString == "../" && S.empty()) {
                continue;
            }
            else if(currentString == "./") {
                continue;
            }
            else {
                S.push(currentString);
            }
            
        }
        
        return S.size();
        
        
        
    }
};