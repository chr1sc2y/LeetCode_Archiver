class Solution {
public:
    bool lemonadeChange(vector<int> &bills) {
        int n = bills.size();
        int hold5 = 0, hold10 = 0, hold20 = 0;
        for (int i = 0; i < n; ++i) {
            if (bills[i] == 5)
                hold5++;
            else if (bills[i] == 10) {
                if (hold5 > 0) {
                    --hold5;
                    ++hold10;
                } else
                    return false;
            } else if (bills[i] == 20) {
                if (hold5 > 0 && hold10 > 0) {
                    --hold5;
                    --hold10;
                    ++hold20;
                } else if (hold5 > 3 && hold10 == 0) {
                    hold5 -= 3;
                    ++hold20;
                } else
                    return false;
            }
        }
        return true;
    }
};