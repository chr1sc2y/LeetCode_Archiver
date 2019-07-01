class Solution {
public:
    bool buddyStrings(string A, string B) {
        int n = A.size(), m = B.size();
        if (n != m) return false;
        for (int i = n - 1; i >= 0; --i) {
            for (int j = i - 1; j >= 0; --j) {
                swap(A[i], A[j]);
                if (A == B)
                    return true;
                swap(A[i], A[j]);
            }
        }
        return false;
    }
};