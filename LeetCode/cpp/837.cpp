class Solution {
public:    
    double new21Game(int total, int k, int n) {
        if (k <= 0 || total >= k + n)
            return 1.0;
        vector<double> dp(total + 1, 0.0);
        dp[0] = 1.0;
        double temp = 1.0,res = 0.0;
        for (int i = 1; i <= total; ++i) {
            dp[i] = temp / (n * 1.0);
            if (i < k)
                temp += dp[i];
            else
                res += dp[i];
            if (i >= n)
                temp -= dp[i - n];
        }
        return res;
    }
};