class Solution {
public:
    vector<string> letterCombinations(string digits) {
        int n = digits.size();
        if(n == 0) return vector<string>();
        char a = \u0027a\u0027;
        for (int i = 0; i < 8; ++i) {
            tran.push_back(vector<char>());
            for (int j = 0; j < 3; ++j)
                tran[i].push_back(a++);
            if(i == 5)
                tran[i].push_back(a++);
        }
        tran[7].push_back(a);
        string temp;
        vector<string> ret;
        BackTracking(digits, n, 0, temp, ret);
        return ret;
    }

    void BackTracking(string digits, int &n, int i, string &temp, vector<string> &ret) {
        if (i == n) {
            ret.push_back(temp);
            return;
        }
        for (int j = 0; j < (tran[digits[i] - \u00270\u0027 - 2]).size(); ++j) {
            temp.push_back(tran[digits[i] - \u00270\u0027 - 2][j]);
            BackTracking(digits, n, i + 1, temp, ret);
            temp.pop_back();
        }
    }

private:
    vector<vector<char>> tran;
};
