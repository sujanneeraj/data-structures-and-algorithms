class Solution {
public:
    string toLowerCase(string s) {
        
        for(int i= 0; i < s.length(); i++) {
            int ascii = int(s[i]);
            
            if(ascii >= 65 && ascii <=90){
                int offset = ascii - 65;
                s[i] = char(97+ offset);
            }
        }
        
        return s;
    }
};