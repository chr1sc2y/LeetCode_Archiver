class Solution {
public:
    void rotate(vector<int> &nums, int k) {
        k %= nums.size();
        while (k > 0) {
            int &temp = nums.back();
            nums.pop_back();
            nums.insert(nums.begin(), temp);
            --k;
        }
    }
};
