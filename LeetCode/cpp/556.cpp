class Solution {
public:
    int nextGreaterElement(int n) {
        auto nums = to_string(n);
        next_permutation(nums.begin(), nums.end());
        auto res = stoll(nums);
        return (res <= n || res > INT_MAX ? -1 : static_cast<int>(res));
    }
};
