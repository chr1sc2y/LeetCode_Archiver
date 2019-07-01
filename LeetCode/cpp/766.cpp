class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        int n = matrix.size();
        if(n == 0)
            return true;
        int m = matrix[0].size();
        for(int i = 0; i < n - 1; ++i) {
            int temp = matrix[i][0], j = i + 1,k = 1;
            while(j < n && k < m) {
                if(matrix[j][k] !=temp)
                    return false;
                ++j;
                ++k;
            }
        }
        for(int i = 1; i < m - 1; ++i) {
            int temp = matrix[0][i], j = 1,k = i + 1;
            while(j < n && k < m) {
                if(matrix[j][k] !=temp)
                    return false;
                ++j;
                ++k;
            }
        }
        return true;
    }
};