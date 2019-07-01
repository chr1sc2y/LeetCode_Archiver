class Solution {
public:
    int maxProfit(vector<int> &prices) {
        int n = prices.size();
        if (n == 0)
            return 0;
        else if (n == 1)
            return prices[1] > prices[0] ? prices[1] - prices[0] : 0;
        vector<int> purchase(n, 0);
        vector<int> sell(n, 0);
        purchase[0] = -prices[0];
        purchase[1] = -prices[1];
        sell[1] = prices[1] - prices[0];
        for (int i = 2; i < n; ++i) {
            int transact = prices[i] - prices[i - 1];
            purchase[i] = max(purchase[i - 1] - transact, sell[i - 2] - prices[i]);
            sell[i] = max(purchase[i - 1] + prices[i], sell[i - 1] + transact);
        }
        return *max_element(sell.begin(), sell.end());
    }
};
