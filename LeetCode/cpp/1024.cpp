class Solution {
public:
    int videoStitching(vector<vector<int>> &clips, int T) {
        int n = clips.size();
        sort(begin(clips), end(clips));
        vector<int> DP(T);
        int res = 0, start = 0, end = 0, i = 0;
        while (end < T) {
            while (i < n && clips[i][0] <= start) {
                end = max(end, clips[i][1]);
                ++i;
            }
            if (start == end)
                return -1;
            ++res;
            start = end;
        }
        return res;
    }
};
