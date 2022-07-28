class Solution {
public:
    bool isAnagram(string s, string t) {
        
        if(s.length() != t.length()) {
            return false;
        }
        
     //   return sortApproach(s, t);
        return hashMapApproach(s, t);
        
    }
    
    bool hashMapApproach(string s, string t){
        unordered_map<char, int> frequency;
        
        for(int i = 0; i < s.length(); i++){
            char ch = s[i];
            if(frequency.find(ch) != frequency.end()){
                frequency[ch]+=1;
            }
            else{
                frequency[ch] = 1;
            }
        }
        
        
        
        for(int i= 0; i < t.length(); i++){
            auto ch = t[i];
            if(frequency.find(ch) != frequency.end()){
                if(frequency[ch] == 0){
                    return false;
                }
                frequency[ch]-=1;
            }
            else{
                return false;
            }
        }
        
        return true;
    }
    
    bool sortApproach(string s, string t){
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        
        if(s == t){
            return true;
        }
        
        return false;
    }
};