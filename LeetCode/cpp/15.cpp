class Solution {
public:
    vector<vector<int>> threeSum(vector<int> &nums) {
        vector<vector<int>> ret;
        auto size = nums.size();
        std::sort(nums.begin(), nums.end());
        for (int j = 0; j < size; ++j) {
            int &&target = -nums[j];
            int x = j + 1, y = size - 1;
            while (x < y) {
                if (nums[x] + nums[y] < target)
                    ++x;
                else if (nums[x] + nums[y] > target)
                    --y;
                else {
                    ret.push_back({nums[j], nums[x], nums[y]});
                    do
                        ++x;
                    while (x < y && nums[x] == nums[x - 1]);
                    do
                        --y;
                    while (x < y && nums[y] == nums[y + 1]);
                }
            }
            while (j + 1 < size && nums[j + 1] == nums[j])
                ++j;
        }
        return ret;
    }
};
