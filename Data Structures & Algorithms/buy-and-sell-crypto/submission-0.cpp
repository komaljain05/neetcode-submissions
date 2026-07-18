class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int best_buy=prices[0];
        int profit=0;
        for(int i=0;i<n;i++){
            profit=max(prices[i]-best_buy,profit);
            best_buy=min(best_buy,prices[i]);
        }
        return profit;
    }
};
