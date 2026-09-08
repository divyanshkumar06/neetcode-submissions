class Solution {
   public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int maxi=0;
        for (int i = 0; i < prices.size(); i++) {
            for (int j = i + 1; j < prices.size(); j++) {
                if (prices[j] > prices[i]) {
                    profit = prices[j] - prices[i];
                }
                maxi=max(maxi,profit);

            }
        }
        return maxi;
    }
};
