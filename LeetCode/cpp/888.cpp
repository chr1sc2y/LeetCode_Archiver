class Solution {
public:
    vector<int> fairCandySwap(vector<int> &A, vector<int> &B) {
        int sumA = 0, sumB = 0;
        for (int i = 0; i < A.size(); ++i)
            sumA += A[i];
        for (int j = 0; j < B.size(); ++j)
            sumB += B[j];
        int diff = (sumA - sumB) / 2;
        for (int i = 0; i < A.size(); ++i)
            for (int j = 0; j < B.size(); ++j)
                if (A[i] - B[j] == diff)
                    return vector<int>{A[i], B[j]};
        return vector<int>();
    }
};