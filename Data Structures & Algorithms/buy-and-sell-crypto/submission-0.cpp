class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int bestbuy=prices[0];
        int maxprofit=0;

        for(int i=1;i<n;i++){
            int profit=prices[i]-bestbuy;
            maxprofit=max(maxprofit,profit);
             bestbuy=min(bestbuy,prices[i]);

        }
        return maxprofit;
    }
};
