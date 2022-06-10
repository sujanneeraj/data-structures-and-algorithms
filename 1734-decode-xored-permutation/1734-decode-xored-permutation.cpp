class Solution {
public:
    vector<int> decode(vector<int>& encoded) {
        
        int first = 0;
        int second = 0;
        int n = encoded.size() + 1;
        vector<int> result(n);
        for(int i = 1; i <=n;i++) {
            result[0] ^= i;
            
        }
        
        for(int i=1; i< n; i+=2) {
            result[0] ^= encoded[i];
        }
        
        
        
        for(int i = 1; i < n; i++) {
            result[i] = result[i-1] ^ encoded[i-1];
            
        }
        
        return result;
        
        
        
    }
};