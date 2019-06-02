class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string> &strs) {
        unordered_map<string, vector<string>> res;
        for (string &str:strs) {
            vector<int> count(26, 0);
            for (char s:str)
                ++count[s - 'a'];
            string key;
            for (int i = 0; i < 26; ++i) {
                key += '#';
                key += to_string(count[i]);
            }
            if (res.find(key) == res.end())
                res.insert(pair<string, vector<string>>(key, vector<string>()));
            res[key].push_back(str);
        }
        vector<vector<string>> ret(res.size(), vector<string>());
        int i = 0;
        for (auto &r:res) {
            ret[i] = r.second;
            ++i;
        }
        return ret;
    }
};
