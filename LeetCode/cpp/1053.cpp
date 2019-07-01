class Solution {
public:
    vector<int> prevPermOpt1(vector<int> &A) {
        int n = A.size();
        for (int i = n - 2; i >= 0; --i) {
            int k = 0, num = 0;
            for (int j = i + 1; j < n; ++j) {
                if (num <= A[j] && A[j] < A[i]) {
                    num = A[j];
                    k = j;
                }
            }
            if (k != 0) {
                swap(A[i], A[k]);
                return A;
            }
        }
        return A;
    }
};
