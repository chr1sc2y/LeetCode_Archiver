class Solution {
public:
    int rob(vector<int> &nums) {
        int size = nums.size();
        if (size == 0) return 0;
        int first = -1, second = -1;
        for (int i = 0; i < size; ++i) {
            if (i % 2 == 0) {
                if (first == -1) first = nums[i];
                else first = max(first + nums[i], second);
            } else {
                if (second == -1) second = max(first, nums[i]);
                else second = max(second + nums[i], first);
            }
        }
        return size % 2 == 0 ? second : first;
    }
};