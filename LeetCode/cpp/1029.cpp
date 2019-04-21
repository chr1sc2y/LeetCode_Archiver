class Solution {
public:
    int twoCitySchedCost(vector<vector<int>> &costs) {
        int sum = 0, n = costs.size();
        sort(costs.begin(), costs.end(), [](const vector<int> &c1, const vector<int> &c2) {
            return c1[0] - c1[1] < c2[0] - c2[1];
        });
        for (int i = 0; i < n; ++i)
            sum += (i < n / 2 ? costs[i][0] : costs[i][1]);
        return sum;
    }
};
