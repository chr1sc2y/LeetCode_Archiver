class Solution {
public:
    int largestSumAfterKNegations(vector<int> A, int K) {
        sort(A.begin(), A.end());
        int i = 0, min_val = INT_MAX;
        while (K > 0 && A[i] < 0) {
            A[i] *= -1;
            ++i;
            --K;
        }
        if (K % 2 == 1) {
            int j = 0;
            for (int i = 0; i < A.size(); ++i) {
                if (min_val > abs(A[i])) {
                    min_val = min(min_val, abs(A[i]));
                    j = i;
                }
            }
            A[j] *= -1;
        }
        int sum = 0;
        for (auto &a:A)
            sum += a;
        return sum;
    }
};
