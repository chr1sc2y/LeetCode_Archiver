class Solution {
public:
    int longestConsecutive(vector<int> &nums) {
        unordered_set<int> count(nums.begin(), nums.end());
        int val = INT_MAX, length = 0;
        while (!count.empty()) {
            int val1 = *count.begin() + 1, val2 = *count.begin() - 1;
            count.erase(*count.begin());
            while (count.find(val1) != count.end()) {
                count.erase(val1);
                ++val1;
            }
            while (count.find(val2) != count.end()) {
                count.erase(val2);
                --val2;
            }
            length = max(length, val1 - val2 - 1);
        }
        return length;
    }
};
