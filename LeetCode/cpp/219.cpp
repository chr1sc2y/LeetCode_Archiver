class Solution {
public:
    bool containsNearbyDuplicate(vector<int> &nums, int k) {
        int n = nums.size();
        if (n <= 1)
            return false;
        map<int, int> dup;
        for (int i = 0; i < n; ++i) {
            if ((dup.find(nums[i]) != dup.end()) && (abs(i - dup[nums[i]]) <= k))
                return true;
            dup[nums[i]] = i;
        }
        return false;
    }
};