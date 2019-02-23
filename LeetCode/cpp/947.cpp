class Solution {
public:
    int removeStones(vector<vector<int>> &stones) {
        int total = 0;
        unordered_map<int, unordered_set<int>> row, col;
        for (auto &s:stones) {
            if (row.find(s[0]) == row.end())
                row.insert(pair<int, unordered_set<int>>(s[0], unordered_set<int>()));
            row[s[0]].insert(s[1]);
            if (col.find(s[1]) == col.end())
                col.insert(pair<int, unordered_set<int>>(s[1], unordered_set<int>()));
            col[s[1]].insert(s[0]);
        }
        for (auto &s:stones) {
            if (!row[s[0]].empty())
                total += DFS(stones, s[0], s[1], row, col) - 1;
        }
        return total;
    }

    int DFS(vector<vector<int>> &stone, int x, int y, unordered_map<int, unordered_set<int>> &row,
            unordered_map<int, unordered_set<int>> &col) {
        int sum = 1;
        row[x].erase(y);
        col[y].erase(x);
        for (auto r:row[x]) {
            sum += DFS(stone, x, r, row, col);
            if (row[x].empty())
                break;
        }
        for (auto c:col[y]) {
            sum += DFS(stone, c, y, row, col);
            if (col[y].empty())
                break;
        }
        return sum;
    }
};