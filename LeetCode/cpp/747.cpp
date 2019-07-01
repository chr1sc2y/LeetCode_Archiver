class Solution {
public:
    int dominantIndex(vector<int> &nums) {
        int n = nums.size();
        if (n == 0)
            return -1;
        else if (n == 1)
            return 0;
        int first = nums[0] > nums[1] ? nums[0] : nums[1];
        int second = nums[0] > nums[1] ? nums[1] : nums[0];
        int iF = nums[0] > nums[1] ? 0 : 1;
        int iS = nums[0] > nums[1] ? 1 : 0;
        for (int i = 2; i < n; ++i) {
            if (nums[i] > first) {
                second = first;
                iS = iF;
                first = nums[i];
                iF = i;
            } else if (nums[i] > second) {
                second = nums[i];
                iS = i;
            }
        }
        return first >= second * 2 ? iF : -1;
    }
};