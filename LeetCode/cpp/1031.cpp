class Solution {
public:
    int maxSumTwoNoOverlap(vector<int> &A, int L, int M) {
        int n = A.size(), res = 0, left = 0, right = 0;
        vector<int> prefix(n + 1);
        for (int i = 1; i <= n; ++i)
            prefix[i] = prefix[i - 1] + A[i - 1];
        for (int i = L + M; i <= n; ++i) {
            left = max(left, prefix[i - M] - prefix[i - M - L]);
            right = prefix[i] - prefix[i - M];
            res = max(res, left + right);
        }
        left = 0, right = 0;
        for (int i = L + M; i <= n; ++i) {
            left = max(left, prefix[i - L] - prefix[i - M - L]);
            right = prefix[i] - prefix[i - L];
            res = max(res, left + right);
        }
        return res;
    }
};
