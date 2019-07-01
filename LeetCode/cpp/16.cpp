class Solution {
public:
    int threeSumClosest(vector<int> &nums, int target) {
        auto size = nums.size();
        sort(nums.begin(), nums.end());
        int minAbs = INT_MAX, ret = 0;
        for (int i = 0; i < size - 2; ++i) {
            int x = i + 1, y = size - 1;
            while (x < y) {
                int sum = nums[x] + nums[y], tar = target - nums[i];
                int num = abs(sum - tar);
                if (minAbs > num) {
                    minAbs = num;
                    ret = nums[x] + nums[y] + nums[i];
                }
                if (minAbs == 0)
                    return ret;
                if (sum < tar)
                    ++x;
                else
                    --y;
            }
        }
        return ret;
    }
};
