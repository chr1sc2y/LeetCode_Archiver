class Solution {
public:
    int findPoisonedDuration(vector<int> &timeSeries, int duration) {
        int n = timeSeries.size(), total = 0;
        if (n == 0)
            return 0;
        for (int i = 1; i < n; ++i) {
            int gap = timeSeries[i] - timeSeries[i - 1];
            if (gap > duration)
                total += duration;
            else
                total += gap;
        }
        return total + duration;
    }
};