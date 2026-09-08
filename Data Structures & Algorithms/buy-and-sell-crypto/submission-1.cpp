class Solution {
   public:
    int maxProfit(vector<int>& prices) {
        int low = 0;
        int right = 1;
      int  profit = 0;
        int maxi=0;
        while (right < prices.size()) {
            if (prices[low] < prices[right]) {
                profit = prices[right] - prices[low];
                maxi=max(maxi,profit);
            
            }else{
                low=right;

            }
            right++;
            
        }
        return maxi;
    }
};
