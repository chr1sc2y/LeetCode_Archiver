class Solution {
public:
    int minEatingSpeed(vector<int> &piles, int H) {
        int i = 1, j = pow(10, 9), mid = 1;
        while (i < j) {
            mid = i + (j - i) / 2;
            if (CanEat(piles, H, mid))
                j = mid;
            else
                i = mid + 1;
        }
        return j;
    }

    bool CanEat(vector<int> &piles, int H, int e) {
        int total = 0;
        for (auto &p:piles) {
            total += p / e + (p % e != 0);
            if (total > H)
                return false;
        }
        return true;
    }
};