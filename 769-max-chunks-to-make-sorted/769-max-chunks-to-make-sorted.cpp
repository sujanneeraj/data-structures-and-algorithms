class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        int count = 0;
        
        int maxSeenSoFar = INT_MIN;
        
        for(int i=0; i < arr.size(); i++) {
            maxSeenSoFar = max(maxSeenSoFar, arr[i]);
            if(maxSeenSoFar == i) {
                count++;
            }
        }
        
        return count;
    }
};