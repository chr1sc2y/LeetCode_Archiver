class Solution {
public:
    int mincostTickets(vector<int> &days, vector<int> &costs) {
        int size = days.size();
        if (size < 2)
            return costs[0] * size;
        vector<int> dp(366, 0);
        int k = 0;
        for (int i = 1; i < 366; ++i) {
            if (k < size && days[k] == i) {
                dp[i] = min(dp[max(0, i - 1)] + costs[0], dp[max(0, i - 7)] + costs[1]);
                ++k;
            } else {
                dp[i] = min(dp[i - 1], dp[max(0, i - 7)] + costs[1]);
            }
            dp[i] = min(dp[i], dp[max(0, i - 30)] + costs[2]);
        }
        return dp.back();
    }
};
