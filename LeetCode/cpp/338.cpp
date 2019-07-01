class Solution {
public:
    vector<int> countBits(int num) {
        vector<int> count(num + 1, 0);
        for (int i = 1; i <= num; ++i)
            count[i] = count[i / 2] + (i % 2);
        return count;
    }
};