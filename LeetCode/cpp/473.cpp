class Solution {
public:
    bool makesquare(vector<int> &nums) {
        int n = nums.size();
        int len = 0, s = 4;
        sort(nums.begin(), nums.end(), greater<int>()); // !
        for (int i = 0; i < n; ++i)
            len += nums[i];
        if (n < 4 || len % 4 != 0 || nums[0] > len)
            return false;
        len /= 4;
        vector<int> side(4, 0);
        return DFS(0, nums, side, len);
    }

    bool DFS(int m, vector<int> &nums, vector<int> &side, int &len) {
        if (m == nums.size()) {
            for (int i = 1; i < 4; ++i)
                if (side[i - 1] != side[i])
                    return false;
            return true;
        }
        for (int i = 0; i < 4; ++i) {
            side[i] += nums[m];
            if (side[i] <= len)
                if (DFS(m + 1, nums, side, len))
                    return true;
            side[i] -= nums[m];
            if (side[i] == 0) // !
                return false;
        }
        return false;
    }
};