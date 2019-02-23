class Solution {
public:
    int minCostClimbingStairs(vector<int> &cost) {
        int size = cost.size();
        if (size < 2)
            return 0;
        int second = cost[0], first = 0, current;
        for (int i = 1; i < size; ++i) {
            current = min(first, second) + cost[i];
            first = second;
            second = current;
        }
        return min(first, second);
    }
};