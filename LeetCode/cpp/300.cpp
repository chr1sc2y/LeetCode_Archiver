class Solution {
public:
    int lengthOfLIS(vector<int> &nums) {
        auto size = nums.size();
        if (size == 0)
            return 0;
        vector<int> seq(1, nums[0]);
        for (int i = 1; i < size; ++i) {
            int mid = 0, x = 0, y = seq.size();
            while (x < y) {
                mid = x + (y - x) / 2;
                if (seq[mid] < nums[i])
                    x = mid + 1;
                else
                    y = mid;
            }
            if (y == seq.size())
                seq.push_back(nums[i]);
            else
                seq[y] = nums[i];
        }
        return seq.size();
    }
};
