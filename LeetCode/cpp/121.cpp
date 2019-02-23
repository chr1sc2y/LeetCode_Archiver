class Solution {
public:
    int maxProfit(vector<int> &prices) {
        int size = prices.size();
        if (size < 2)
            return 0;
        int min = prices[0], profit = 0;
        for (int i = 1; i < size; ++i) {
            if (min > prices[i]) min = prices[i];
            profit = max(profit, prices[i] - min);
        }
        return profit;
    }
};