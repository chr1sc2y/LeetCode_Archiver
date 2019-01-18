class Solution {
public:
\u0009std::vector<int> twoSum(std::vector<int>& nums, int target) {
\u0009\u0009std::map<int, int> hash;
\u0009\u0009int size = nums.size();
\u0009\u0009std::vector<int> ret;
\u0009\u0009for (int i = 0; i < size; ++i) {
\u0009\u0009\u0009if (hash.find(target - nums[i]) != hash.end()) {
\u0009\u0009\u0009\u0009ret.push_back(hash[target - nums[i]]);
\u0009\u0009\u0009\u0009ret.push_back(i);
\u0009\u0009\u0009\u0009return ret;
\u0009\u0009\u0009}
\u0009\u0009\u0009hash.insert(std::pair<int, int>(nums[i], i));
\u0009\u0009}
\u0009}
};