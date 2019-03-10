class Solution {
public:
    vector<int> nextGreaterElements(vector<int> &nums) {
        int n = nums.size();
        stack<int> s;
        vector<int> ret(n, -1);
        for (int i = 0; i < n * 2; ++i) {
            while (!s.empty() && nums[s.top()] < nums[i % n]) {
                ret[s.top()] = nums[i % n];
                s.pop();
            }
            if (i < n)
                s.push(i);
        }
        return ret;
    }
};
