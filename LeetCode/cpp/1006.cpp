class Solution {
public:
    int clumsy(int N) {
        vector<int> nums;
        if (N >= 4) {
            nums.push_back(N * (N - 1) / (N - 2) + (N - 3));
            N -= 4;
        }
        while (N >= 4) {
            nums.push_back(N * (N - 1) / (N - 2) - (N - 3));
            N -= 4;
        }
        int temp = 0;
        if (N > 0) {
            temp = N;
            --N;
            if (N > 0) {
                temp *= N;
                --N;
                if (N > 0) {
                    temp /= N;
                    --N;
                }
            }
        }
        if (nums.empty())
            return temp;
        int res = nums[0];
        int i = 1;
        while (i < nums.size()) {
            res -= nums[i];
            ++i;
        }
        return res - temp;
    }
};
