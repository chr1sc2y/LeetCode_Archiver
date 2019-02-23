class Solution {
public:
    bool canPlaceFlowers(vector<int> &flowerbed, int n) {
        int m = flowerbed.size(), emp = 0, total = 0;
        flowerbed.insert(flowerbed.begin(), 0);
        flowerbed.insert(flowerbed.begin(), 1);
        flowerbed.insert(flowerbed.end(), 0);
        flowerbed.insert(flowerbed.end(), 1);
        for (int i = 0; i < m + 4; ++i) {
            if (flowerbed[i] == 1) {
                total += (emp - 1) / 2;
                emp = 0;
            } else if (flowerbed[i] == 0)
                ++emp;
        }
        return total >= n;
    }
};