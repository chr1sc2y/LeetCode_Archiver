class Solution {
public:
    int binaryGap(int N) {
        vector<int> bin;
        while (N) {
            int temp = N % 2;
            bin.push_back(temp);
            N = N / 2;
        }
        int dis = 0, cur = 0;
        for (int i = bin.size() - 2; i >= 0; --i) {
            if (bin[i] == 1) {
                dis = max(dis, cur + 1);
                cur = 0;
            } else
                ++cur;
        }
        return dis;
    }
};