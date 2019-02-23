class Solution {
public:
    int numSubarrayBoundedMax(vector<int> &A, int L, int R) {
        int i = 0, j = 0, m = -1, total = 0;
        while (j < A.size()) {
            if (A[j] >= L && A[j] <= R) {
                m = j;
                total += j - i + 1;
            } else if (A[j] < L) {
                total += m != -1 ? m - i + 1 : 0;
            } else if (A[j] > R) {
                i = j + 1;
                m = -1;
            }
            ++j;
        }
        return total;
    }
};