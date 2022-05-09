class Solution {
public:
    
    string processString(string s) {
        stack<char> stk;
        
        for(int i = 0; i < s.length(); i++) {
            //int result = strcmp(s[i], "#");
            if(s[i] == '#' and !stk.empty()) {
                stk.pop();
            }
            else if(s[i] != '#'){
                stk.push(s[i]);
            }
        }
        
        string result;
        while(!stk.empty()) {
            char top = stk.top();
            stk.pop();
            result += top;
        }
        reverse(result.begin(), result.end());
        return result;
    }
    
    bool backspaceCompare(string s, string t) {
        
        auto s_processed = processString(s);
        auto t_processed = processString(t);
        
        //int result = strcmp(s_processed, t_processed);
        if(s_processed == t_processed) {
            return true;
        }
        
        return false;
        
    }
};