class Solution {
public:
    int findMaxConsecutiveOnes(vector<int> &nums) {
        int m = 0 , maxM = 0;
        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] == 1) {
                ++m;
                maxM = max(maxM,m);
            }
            else
                m = 0;
        }
        return maxM;
    }
};
