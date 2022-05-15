class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        
        vector<string> res(s.length(), "");
        
        for(int i = 0; i < indices.size();i++) {
            int position = indices[i];
            
            res[position] = s[i];
            
        }
        
        string result = "";
        
        for(int i = 0; i < res.size();i++) {
            result += res[i];
        }
        
        return result;
        
        
    }
};