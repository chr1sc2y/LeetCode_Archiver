class Solution {
public:
    vector<int> sortArrayByParity(vector<int> &A) {
        int i = 0, j = 0;
        while (j < A.size()) {
            if (A[j] % 2 == 0) {
                swap(A[i], A[j]);
                ++i;
            }
            ++j;
        }
        return A;
    }
};