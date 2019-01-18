class Solution {
public:
    int maxProfit(vector<int> &prices) {
        bool bought = false;
        auto size = prices.size();
        int profit = 0, price = 0;
        int i = 0;
        while (i < size) {
            if (!bought) {
                if (prices[i] < prices[i + 1] && i + 1 < size) {
                    price = prices[i];
                    bought = true;
                }
            } else {
                if (prices[i] > prices[i + 1] && i + 1 < size) {
                    profit += (prices[i] - price);
                    price = 0;
                    bought = false;
                }
            }
            ++i;
        }
        if (bought)
            profit += prices[i - 1] - price;
        return profit;
    }
};
