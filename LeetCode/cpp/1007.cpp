class Solution {
public:
    int minDominoRotations(vector<int> &A, vector<int> &B) {
        int n = A.size();
        unordered_map<int, int> count;
        int max_key = 0, max_value = 0;
        for (int i = 0; i < n; ++i) {
            ++count[A[i]];
            if (B[i] != A[i])
                ++count[B[i]];
            if (max_value < count[A[i]]) {
                max_value = count[A[i]];
                max_key = A[i];
            }
            if (max_value < count[B[i]]) {
                max_value = count[B[i]];
                max_key = B[i];
            }
        }
        if (max_value < n)
            return -1;
        int res = 0, a = 0, b = 0;
        for (int i = 0; i < n; ++i) {
            if (A[i] == max_key)
                ++a;
            if (B[i] == max_key)
                ++b;
        }
        return min(n - a, n - b);
    }
};
