class Solution {
public:
    vector<string> restoreIpAddresses(string s) {
        int n = s.size();
        vector<string> ret;
        vector<int> temp;
        BackTracking(s, n, 0, temp, ret);
        return ret;
    }

    void BackTracking(string &s, int &n, int i, vector<int> &temp, vector<string> &ret) {
        if (temp.size() == 4) {
            if (i == n)
                push(temp, ret);
            return;
        }
        for (int j = i; j < i + 3; ++j) {
            if (j >= n) return;
            if (stoi(s.substr(i, j - i + 1)) > 255) return;
            if (j - i > 0 && s[i] == '0') return;
            temp.push_back(stoi(s.substr(i, j - i + 1)));
            BackTracking(s, n, j + 1, temp, ret);
            temp.pop_back();
        }
    }

    void push(vector<int> &temp, vector<string> &ret) {
        string s;
        for (int i = 0; i < 4; ++i)
            s += (to_string(temp[i]) + ".");
        s.pop_back();
        ret.push_back(s);
    }
};
