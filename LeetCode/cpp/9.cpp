class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0)
            return false;
        vector<int> nums;
        while (x) {
            nums.push_back(x % 10);
            x /= 10;
        }
        int i = 0, j = nums.size() - 1;
        while (i < j) {
            if (nums[i] != nums[j])
                return false;
            ++i, --j;
        }
        return true;
    }
};
