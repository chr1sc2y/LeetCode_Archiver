class Solution {
public:
    int findLongestChain(vector<vector<int>>& pairs) {
        int size = pairs.size();
        sort(pairs.begin(), pairs.end(), [](const vector<int>& a, const vector<int>& b){return a[0] < b[0];});
        vector<int> length;
        length.push_back(1);
        for (int i = 1; i < size; ++i) {
            int currentLeft = pairs[i][0], currentRight = pairs[i][1];
            int currentMax = 0;
            for (int j = 0; j < i; ++j) {
                int prevRight = pairs[j][1];
                if (currentLeft > prevRight)
                    currentMax = length[j];
            }
            length.push_back(++currentMax);
        }
        return length[size - 1];
    }
};