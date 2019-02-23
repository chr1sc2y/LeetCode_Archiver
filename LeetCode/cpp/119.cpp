class Solution {
public:
    vector<int> getRow(int rowIndex) {
        int n = rowIndex;
        vector<int> first;
        vector<int> second;
        first.push_back(1);
        for (int i = 1; i <= n; ++i) {
            for (int j = 0; j < i + 1; ++j) {
                if (j == 0 || j == i)
                    second.push_back(1);
                else
                    second.push_back(first[j - 1] + first[j]);
            }
            first = second;
            second.clear();
        }
        return first;
    }
};