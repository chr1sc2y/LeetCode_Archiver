class Solution {
public:
    int shoppingOffers(vector<int> &price, vector<vector<int>> &special, vector<int> &needs) {
        int base = 0, size = needs.size();
        bool empty = true;
        for (int i = 0; i < size; ++i) {
            if (needs[i] != 0)
                empty = false;
            base += price[i] * needs[i];
        }
        if (empty)
            return 0;
        for (int i = 0; i < special.size(); ++i) {
            vector<int> temp;
            int remain = 0;
            for (int j = 0; j < size; ++j) {
                if (j == special[i].size() - 1)
                    break;
                remain = needs[j] - special[i][j];
                if (remain < 0)
                    break;
                temp.push_back(remain);
            }
            if (remain >= 0)
                base = min(base, shoppingOffers(price, special, temp) + special[i][size]);
        }
        return base;
    }
};
