class Solution {
public:
    int findTargetSumWays(vector<int> &nums, int S) {
        if (nums.size() == 0)
            return 0;
        int index = 0;
        return calcS(nums, S, 1, nums[0]) + calcS(nums, S, 1, -nums[0]);
    }

    int calcS(const vector<int> &nums, const int &S, const int &index, const int &sum) {
        if (index == nums.size()) {
            if (sum == S)
                return 1;
            return 0;
        }
        return calcS(nums, S, index + 1, sum + nums[index]) + calcS(nums, S, index + 1, sum - nums[index]);
    }
};
