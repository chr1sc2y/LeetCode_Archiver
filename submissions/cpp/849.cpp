class Solution {
public:
    int maxDistToClosest(vector<int> &seats) {
        int maxDist = 1;
        int i = 0;
        if (seats[i] == 0) {
            while (i < seats.size() && seats[i] == 0)
                ++i;
        }
        maxDist = maxDist < i ? i : maxDist;
        i = seats.size() - 1;
        int j = 0;
        if(seats[i] == 0) {
            while (i >= 0 && seats[i] == 0) {
                --i;
                ++j;
            }
        }
        maxDist = maxDist < j ? j : maxDist;
        for (i = 0; i < seats.size(); ++i) {
            int current = 1;
            if (seats[i] == 0) {
                int left = i - 1, right = i + 1;
                while (left >= 0 && right < seats.size() && seats[left] == 0 && seats[right] == 0) {
                    ++current;
                    --left;
                    ++right;
                }
            }
            if (current > maxDist)
                maxDist = current;
        }
        return maxDist;
    }
};
