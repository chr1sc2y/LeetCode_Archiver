class Solution {
public:
    int maxSubArray(vector<int> &nums) {
        int size = nums.size();
        if (size == 0) return 0;
        int max_sum = INT_MIN, cumulative = 0;
        for (int i = 0; i < size; ++i) {
            cumulative += nums[i];
            max_sum = max(max_sum, cumulative);
            if (cumulative < 0) cumulative = 0;
        }
        return max_sum;
    }
};