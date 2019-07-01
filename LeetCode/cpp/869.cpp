class Solution {
public:
    bool power = false;

    bool reorderedPowerOf2(int N) {
        vector<int> n, cur;
        while (N) {
            n.push_back(N % 10);
            N /= 10;
        }
        vector<bool> visited(n.size(), false);
        recurse(cur, n, visited, 0, n.size());
        return power;
    }

    void recurse(vector<int> &cur, vector<int> &n, vector<bool> &visited, int i, int m) {
        if (i == m) {
            int temp = 0;
            for (int k = 0; k < cur.size(); ++k)
                temp = temp * 10 + cur[k];
            while (temp > 1) {
                int t = temp % 2;
                if (t)
                    return;
                temp /= 2;
            }
            power = true;
            return;
        }
        for (int j = 0; j < m; ++j) {
            if(i == 0 && n[j] == 0)
                continue;
            if (!visited[j]) {
                visited[j] = true;
                cur.push_back(n[j]);
                recurse(cur, n, visited, i + 1, m);
                if (power)
                    return;
                visited[j] = false;
                cur.pop_back();
            }
        }
    }
};