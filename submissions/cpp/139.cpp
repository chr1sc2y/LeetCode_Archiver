class Solution {
public:
    bool wordBreak(string s, vector<string> &wordDict) {
        int n = s.size();
        if (n == 0)
            return true;
        map<string, bool> dict;
        for (int i = 0; i < wordDict.size(); ++i)
            dict.insert(map<string, bool>::value_type(wordDict[i], true));
        vector<bool> dp(n + 1, false);
        dp[0] = true;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j <= i; ++j) {
                string temp = s.substr(j, i - j + 1);
                if (dict.find(temp) != dict.end() && (dp[j] == true || j == 0)) {
                    dp[i + 1] = true;
                    break;
                }
            }
        }
        return dp[n];
    }
};