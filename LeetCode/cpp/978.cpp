class Solution {
public:
    int maxTurbulenceSize(vector<int> &A) {
        int size = A.size(), maxSize = 1, curSize = 1;
        if (size <= 2) return size;
        for (int i = 1; i < size - 1; ++i) {
            if ((A[i] > A[i - 1] && A[i] > A[i + 1]) || (A[i] < A[i - 1] && A[i] < A[i + 1])) {
                ++curSize;
                maxSize = max(maxSize, curSize);
            } else
                curSize = 1;
        }
        return maxSize > 1 ? maxSize + 1 : 2;
    }
};
