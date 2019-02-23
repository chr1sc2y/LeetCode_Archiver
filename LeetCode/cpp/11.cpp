class Solution {
public:
    int maxArea(vector<int> &height) {
        int i = 0, j = height.size() - 1;
        int maxAre = 0;
        while (i < j) {
            maxAre = max(maxAre, min(height[i], height[j]) * (j - i));
            if (height[i] > height[j])
                --j;
            else
                ++i;
        }
        return maxAre;
    }
};
