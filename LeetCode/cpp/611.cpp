class Solution {
public:
    int triangleNumber(vector<int> &nums) {
        int num = 0, size = nums.size();
        sort(nums.begin(), nums.end());
        for (int i = 2; i < size; ++i) {
            if (nums[i] == 0)
                continue;
            int j = 0, k = i - 1;
            while (j < k) {
                if (nums[j] + nums[k] > nums[i] && nums[j] - nums[k] < nums[i]) {
                    num += k - j;
                    --k;
                } else
                    ++j;
            }
        }
        return num;
    }
};
