class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // o(n)
        int maxprofit = 0;
        int minelem = INT_MAX;
        for(int i =0; i < prices.size(); i++){
            minelem = min(prices[i], minelem);
            maxprofit = max(prices[i] - minelem, maxprofit);
        }
        return maxprofit;
        
        
        //second appraoch from last
        int n = prices.size();
        int maxprofit = 0;
        int maxelem = prices[n-1]; //max element from last
        for(int i = n - 1; i >= 0;i --){
            maxelem = max(prices[i], maxelem);
            maxprofit = max(maxprofit, maxelem - prices[i]);
        }
        return maxprofit;
        
        
        
        
        //brute
        int maxprofit = 0;
        int minprice = INT_MAX;
        for(int i=0; i < prices.size(); i++){
            for(int j = i + 1; j < prices.size(); j++){
                if(prices[i] < prices[j]){
                    int newmax = prices[j] - prices[i];
                    maxprofit = max(newmax, maxprofit);
                }
            }
        }
        return maxprofit;
    }
};