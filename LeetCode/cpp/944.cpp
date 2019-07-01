class Solution {
public:
    int minDeletionSize(vector<string> &A) {
        const int size = A.size();
        if (size <= 1) return 0;
        const int len = A[0].size();
        int sum = 0;
        for (int i = 0; i < len; ++i) {
            for (int j = 1; j < size; ++j) {
                if (A[j][i] < A[j - 1][i]) {
                    ++sum;
                    break;
                }
            }
        }
        return sum;
    }
};