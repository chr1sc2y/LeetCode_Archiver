class Solution {
public:
    vector<int> intersection(vector<int> &nums1, vector<int> &nums2) {
        unordered_set<int> s;
        vector<int> nums;
        for (auto n: nums1)
            if (s.find(n) == s.end())
                s.insert(n);
        for (auto n:nums2) {
            if (s.find(n) != s.end()) {
                nums.push_back(n);
                s.erase(n);
            }
        }
        return nums;
    }
}; 