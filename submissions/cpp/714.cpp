class Solution {
public:
    int maxProfit(vector<int> &prices, int fee) {
        auto size = prices.size();
        if (size == 0)
            return 0;
        vector<int> hold(size, 0), notHold(size, 0);
        hold[0] = -prices[0];
        for (int i = 1; i < size; ++i) {
            hold[i] = max(hold[i - 1], notHold[i - 1] - prices[i]);
            notHold[i] = max(notHold[i - 1], hold[i - 1] + prices[i] - fee);
        }
        return notHold[size - 1];
    }
};
