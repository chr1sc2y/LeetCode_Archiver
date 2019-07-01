class Solution {
public:
    bool equationsPossible(vector<string> &equations) {
        match = vector<int>(26, 0);
        for (int i = 0; i < 26; ++i)
            match[i] = i;
        for (auto &s:equations) {
            if (s[1] == '=')
                match[Match(s[0] - 'a')] = Match(s[3] - 'a');
        }
        for (auto &s:equations) {
            if (s[1] == '!')
                if (Match(match[s[0] - 'a']) == Match(match[s[3] - 'a']))
                    return false;
        }
        return true;
    }

private:
    vector<int> match;

    int Match(int i) {
        if (match[i] == i)
            return i;
        return Match(match[i]);
    }
};