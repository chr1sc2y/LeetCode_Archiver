class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>> &flights, int src, int dst, int K) {
        vector<int> bf(n, INT_MAX);
        bf[src] = 0;
        for (int i = 0; i <= K; ++i) {
            vector<int> temp(bf);
            for (int j = 0; j < flights.size(); ++j)
                if (bf[flights[j][0]] != INT_MAX)
                    temp[flights[j][1]] = min(temp[flights[j][1]], bf[flights[j][0]] + flights[j][2]);
            bf = temp;
        }
        return bf[dst] == INT_MAX ? -1 : bf[dst];
    }
};