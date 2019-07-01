class Solution {
public:
    int nthSuperUglyNumber(int n, vector<int> &primes) {
        int m = primes.size();
        vector<int> factor(primes.size(), 0), res(n, 1);
        for (int i = 1; i < n; ++i) {
            res[i] = INT_MAX;
            for (int j = 0; j < m; ++j)
                res[i] = min(res[i], primes[j] * res[factor[j]]);
            for (int j = 0; j < m; ++j)
                if (primes[j] * res[factor[j]] == res[i])
                    ++factor[j];
        }
        return res.back();
    }
};
