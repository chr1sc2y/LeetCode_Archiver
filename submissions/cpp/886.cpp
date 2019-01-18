class Solution {
public:
    bool possibleBipartition(int N, vector<vector<int>> &dislikes) {
        int n = dislikes.size();
        if (!n)
            return true;
        vector<int> dis(N + 1, 0);
        int k = 3;
        sort(dislikes.begin(), dislikes.end());
        dis[dislikes[0][0]] = 1;
        dis[dislikes[0][1]] = 2;
        for (int i = 1; i < n; ++i) {
            if (dis[dislikes[i][0]] == 0) {
                if (dis[dislikes[i][1]] == 0) {
                    dis[dislikes[i][0]] = k++;
                    dis[dislikes[i][1]] = k++;
                } else {
                    int t = dis[dislikes[i][1]];
                    dis[dislikes[i][0]] = (t % 2 == 0 ? t - 1 : t + 1);
                }
            }
            if (dis[dislikes[i][0]] == 1)
                dis[dislikes[i][1]] = 2;
            else if (dis[dislikes[i][0]] == 2)
                dis[dislikes[i][1]] = 1;
        }
        for (int i = 0; i < n; ++i) {
            if (dis[dislikes[i][0]] == dis[dislikes[i][1]])
                return false;
        }
        return true;
    }
};