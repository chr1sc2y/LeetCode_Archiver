class Solution {
public:
    int countArrangement(int N) {
        int num = 0;
        vector<int> used(N + 1, 0);
        BackTracking(1, num, used, N);
        return num;
    }

    void BackTracking(int n, int &num, vector<int> &used, int &N) {
        if (n > N) {
            ++num;
            return;
        }
        for (int i = 1; i <= N; ++i) {
            if (used[i] == 0 && (i % n == 0 || n % i == 0)) {
                used[i] = 1;
                BackTracking(n + 1, num, used, N);
                used[i] = 0;
            }
        }
    }
};
