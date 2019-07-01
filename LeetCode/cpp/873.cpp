class Solution {
public:
    int lenLongestFibSubseq(vector<int> &A) {
        unordered_set<int> S;
        for (auto a:A)
            S.insert(a);
        int maxLen = 0;
        for (int i = 0; i < A.size(); ++i) {
            for (int j = i + 1; j < A.size(); ++j) {
                int a = A[i], b = A[j], &&len = 0;
                while (S.find(a + b) != S.end()) {
                    int c = b;
                    b = a + b;
                    a = c;
                    ++len;
                    maxLen = max(maxLen, len);
                }
            }
        }
        return maxLen == 0 ? 0 : maxLen + 2;
    }
};
