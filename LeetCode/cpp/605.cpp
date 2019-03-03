class Solution {
public:
    bool canPlaceFlowers(vector<int> &flowerbed, int n) {
        if (flowerbed.size() == 0)
            return n == 0;
        else if (flowerbed.size() == 1 && ((flowerbed[0] == 1 && n == 0) || (flowerbed[0] == 0 && n <= 1)))
            return true;
        if (flowerbed[0] == 0 && flowerbed[1] == 0) {
            flowerbed[0] = 1;
            --n;
        }
        for (int i = 1; i < flowerbed.size() - 1; ++i) {
            if (flowerbed[i - 1] == 0 && flowerbed[i] == 0 && flowerbed[i + 1] == 0) {
                flowerbed[i] = 1;
                --n;
            }
            if (n <= 0)
                return true;
        }
        if (flowerbed[flowerbed.size() - 1] == 0 && flowerbed[flowerbed.size() - 2] == 0) {
            flowerbed[flowerbed.size() - 1] = 1;
            --n;
        }
        return n == 0;
    }
};