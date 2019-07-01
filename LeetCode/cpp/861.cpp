class Solution {
public:
    int matrixScore(vector<vector<int>> &A) {
        vector<vector<int>> B(A);
        int n = B.size();
        if (n == 0) return 0;
        int m = B[0].size();
        for (int i = 0; i < n; ++i) {
            if (B[i][0] == 0)
                ToggleRow(B, i);
        }
        for (int j = 1; j < m; ++j) {
            int sumColumn = 0;
            for (int i = 0; i < n; ++i)
                sumColumn += B[i][j];
            if (sumColumn < (n + 1) / 2)
                ToggleCol(B, j);
        }
        int sum = 0;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                sum += B[i][j] * pow(2, m - j - 1);
            }
        }
        return sum;
    }

    void ToggleRow(vector<vector<int>> &B, int i) {
        for (int j = 0; j < B[i].size(); ++j)
            B[i][j] = (B[i][j] == 0 ? 1 : 0);
    }

    void ToggleCol(vector<vector<int>> &B, int j) {
        for (int i = 0; i < B.size(); ++i)
            B[i][j] = (B[i][j] == 0 ? 1 : 0);
    }
};
