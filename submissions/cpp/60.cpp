class Solution {
public:
    string getPermutation(int n, int k) {
        vector<int> num;
        vector<int> visited(n + 1, 0);
        BackTracking(n, k, num, visited, 0);
        return ret;
    }

    void BackTracking(int &n, int &k, vector<int> &num, vector<int> &visited, int m) {
        if (!ret.empty())
            return;
        if (m == n) {
            --k;
            if (k == 0)
                for (int j = 0; j < n; ++j)
                    ret += num[j] + \u00270\u0027;
            return;
        }
        for (int i = 1; i <= n; ++i) {
            if (!visited[i]) {
                visited[i] = 1;
                num.push_back(i);
                BackTracking(n, k, num, visited, m + 1);
                num.pop_back();
                visited[i] = 0;
            }
        }
    }

private:
    string ret;
};

