class Solution {
public:
    int findJudge(int N, vector<vector<int>> &trust) {
        vector<int> indegree(N + 1, 0), outdegree(N + 1, 0);
        for (auto &t:trust) {
            ++outdegree[t[0]];
            ++indegree[t[1]];
        }
        for (int i = 1; i <= N; ++i) {
            if (indegree[i] == N - 1 && outdegree[i] == 0)
                return i;
        }
        return -1;
    }
};