class Solution {
public:
\u0009vector<int> findDuplicates(vector<int>& nums) {
\u0009\u0009int size = nums.size();
\u0009\u0009vector<int> ret;
\u0009\u0009for (int i = 0; i < size; ++i) {
\u0009\u0009\u0009nums[abs(nums[i]) - 1] = -nums[abs(nums[i]) - 1];
\u0009\u0009\u0009if (nums[abs(nums[i]) - 1] > 0)
\u0009\u0009\u0009\u0009ret.push_back(abs(nums[i]));
\u0009\u0009}
\u0009\u0009return ret;
\u0009}
};
