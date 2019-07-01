class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        int i = s.size() - 1, j = g.size() - 1;
        while (i >= 0 && j >= 0) {
            if(s[i] >= g[j])
                --i;
            --j;
        }
        return s.size() - i - 1;
    }
};