class Solution {
public:
    vector<string> generateParenthesis(int n) {
        int l = n, r = n;
        vector<string> ret;
        BackTracking(l, r, "", ret);
        return ret;
    }

    void BackTracking(int left, int right, string temp, vector<string> &ret) {
        if (left > right)
            return;
        if (left < 0 || right < 0)
            return;
        if (left == 0 && right == 0) {
            ret.push_back(temp);
            return;
        }
        BackTracking(left - 1, right, temp + '(', ret);
        BackTracking(left, right - 1, temp + ')', ret);
    }
};