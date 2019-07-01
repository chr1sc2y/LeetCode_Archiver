class Solution {
public:
    int minFlipsMonoIncr(string S) {
        int size = S.size(), res = INT_MAX;
        if (size == 0)
            return 0;
        vector<int> pre_one(size, 0), post_zero(size, 0);
        pre_one[0] = S[0] == 1;
        post_zero[size - 1] = S[size - 1] == 0;
        for (int i = 1; i < size; ++i)
            pre_one[i] = pre_one[i - 1] + (S[i - 1] == '1');
        for (int i = size - 2; i >= 0; --i)
            post_zero[i] = post_zero[i + 1] + (S[i + 1] == '0');
        for (int i = 0; i < size; ++i)
            res = min(res, pre_one[i] + post_zero[i]);
        return res;
    }
};