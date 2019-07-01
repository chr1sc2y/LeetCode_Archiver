class NumMatrix {
public:
    NumMatrix(vector<vector<int>> matrix) {
        int n = matrix.size();
        if (n != 0) {
            int m = matrix[0].size();
            for (int i = 0; i < n; ++i) {
                int tempSum = 0;
                vector<int> temp;
                for (int j = 0; j < m; ++j) {
                    tempSum += matrix[i][j];
                    temp.push_back(i == 0 ? tempSum : (tempSum + sum[i - 1][j]));
                }
                sum.push_back(temp);
            }
        }
    }

    int sumRegion(int row1, int col1, int row2, int col2) {
        if (row1 == 0 && col1 == 0)
            return sum[row2][col2];
        else if (row1 == 0)
            return sum[row2][col2] - sum[row2][col1 - 1];
        else if (col1 == 0)
            return sum[row2][col2] - sum[row1 - 1][col2];
        return sum[row2][col2] - sum[row1 - 1][col2] - sum[row2][col1 - 1] + sum[row1 - 1][col1 - 1];
    }

    vector<vector<int>> sum;
};