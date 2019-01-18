class Solution {
public:
    int numberOfArithmeticSlices(vector<int> &A) {
        int size = A.size();
        if (size <= 2) return 0;
        int len = 0, num = 0;
        for (int i = 1; i < size - 1; ++i) {
            if (A[i] - A[i - 1] == A[i + 1] - A[i])
                ++len;
            else {
                num += len * (len + 1) / 2;
                len = 0;
            }
        }
        if (len)
            num += len * (len + 1) / 2;
        return num;
    }
};