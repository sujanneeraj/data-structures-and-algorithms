class Solution {
public:
    int calPoints(vector<string>& ops) {
        
        
        if(ops.size() == 0) {
            return 0;
        }
        
        stack<int> S;
        
        S.push(stoi(ops[0]));
        
        for(int i = 1; i < ops.size(); i++) {
            
            if(ops[i] == "C") {
                
                S.pop();
                
            }
            else if(ops[i] == "D") {
                int top = S.top();
                int double_score = top * 2;
                S.push(double_score);
            }
            
            else if(ops[i] == "+") {
                
                int b = S.top();
                S.pop();
                int a = S.top();
                S.pop();
                int c = a+b;
                S.push(a);
                S.push(b);
                S.push(c);
                
                
            }
            else {
                S.push(stoi(ops[i]));
            }
            
        }
        
        int result = 0;
        
        while(!S.empty()) {
            result += S.top();
            S.pop();
        }
        
        return result;
        
    }
};