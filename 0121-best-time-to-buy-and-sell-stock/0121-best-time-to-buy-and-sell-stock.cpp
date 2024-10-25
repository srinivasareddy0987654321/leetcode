class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0;
        int p=prices[0];
        
        for(int i=1;i<prices.size();i++){
            
            
            int s=prices[i]-p;
            profit=max(profit,s);
            p=min(p,prices[i]);
            
        }
        return profit;
                      
        
    }
};