class Solution {
public:
    string convert(string s, const int &len) {
        int i = 0, n = s.size();
        vector<string> vec;
        while (i < n) {
            string line(len, ' ');
            int j = 0;
            while (i < n && j < len) {
                line[j] = s[i];
                ++i, ++j;
            }
            vec.push_back(line);
            j = 0;
            while (i < n && j < len - 2) {
                string gap(len, ' ');
                gap[len - j - 2] = s[i];
                ++i, ++j;
                vec.push_back(gap);
            }
        }
        string res;
        for (i = 0; i < len; ++i) {
            for (int j = 0; j < vec.size(); ++j) {
                if (vec[j][i] != ' ')
                    res += vec[j][i];
            }
        }
        return res;
    }
};
