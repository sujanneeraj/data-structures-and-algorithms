class Solution {
public:
    int maxProfit(vector<int>& prices) {
    
       int min_price = prices[0];
       
       int max_price = 0;
        
        for(int i = 1; i < prices.size(); i++) {
            if(prices[i] < min_price) {
                min_price = prices[i];
            }
            
            max_price = max(max_price, prices[i] - min_price);
        
        }
        
        return max_price;
        
    }
};