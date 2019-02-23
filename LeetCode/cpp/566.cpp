class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>> &nums, int r, int c) {
        int n = nums.size();
        if (n == 0)
            return nums;
        int m = nums[0].size();
        if (n * m != r * c)
            return nums;
        vector<vector<int>> matrix;
        vector<int> temp;
        int x = 0, y = 0;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                temp.push_back(nums[i][j]);
                ++y;
                if (y == c) {
                    ++x;
                    y = 0;
                    matrix.push_back(temp);
                    temp.clear();
                }
            }
        }
        return matrix;
    }
};
