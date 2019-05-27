class Solution {
public:
    int maxSatisfied(vector<int> &customers, vector<int> &grumpy, int X) {
        int n = customers.size(), res = 0;
        for (int i = 0; i < n; ++i)
            res += customers[i] * (grumpy[i] ^ 1);
        for (int i = 0; i < n && i < X; ++i)
            res += customers[i] * grumpy[i];
        if (X >= n)
            return res;
        int temp = res;
        for (int i = X; i < n; ++i) {
            temp = temp - customers[i - X] * grumpy[i - X] + customers[i] * grumpy[i];
            res = max(res, temp);
        }
        return res;
    }
};
