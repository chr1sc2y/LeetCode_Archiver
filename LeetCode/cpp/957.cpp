class Solution {
public:
    vector<int> prisonAfterNDays(vector<int> &cells, int N) {
        vector<int> temp = cells;
        N %= 14;
        N += (N == 0 ? 14 : 0);
        for (int j = 0; j < N; ++j) {
            for (int i = 1; i <= 6; ++i) {
                if (cells[i - 1] == cells[i + 1])
                    temp[i] = 1;
                else
                    temp[i] = 0;
            }
            if (j == 0)
                temp[0] = temp[7] = 0;
            cells = temp;
        }
        return cells;
    }
};