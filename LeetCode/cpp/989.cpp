class Solution {
public:
    vector<int> addToArrayForm(vector<int> &A, int K) {
        int i = A.size() - 1, l = 0;
        if (i <= -1)
            return {};
        while (i >= 0) {
            int temp = K % 10;
            A[i] += temp + l;
            l = A[i] / 10;
            A[i] %= 10;
            K /= 10;
            --i;
        }
        while (K != 0) {
            l = K % 10 + l;
            A.insert(A.begin(), l % 10);
            l /= 10;
            K /= 10;
        }
        if (l == 1)
            A.insert(A.begin(), 1);
        return A;
    }
};