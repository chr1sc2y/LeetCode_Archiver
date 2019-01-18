class Solution {
public:
    vector<int> ret;

    vector<int> numsSameConsecDiff(int N, int K) {
        if (N == 0)
            return {0};
        ret.clear();
        if (N == 1)
            ret.push_back(0);

        for (int i = 1; i <= 9; ++i)
            helper(i, N - 1, K, i);

        return ret;
    }

    void helper(int last, int N, int K, int x) {
        if (N <= 0) {
            ret.push_back(x);
            return;
        }
        if (last + K < 10)
            helper(last + K, N - 1, K, x * 10 + last + K);
        if (last - K >= 0 && K != 0)
            helper(last - K, N - 1, K, x * 10 + last - K);
    }
};