class Solution {
public:
    string predictPartyVictory(string senate) {
        int R = 1, D = 1, r = 0, d = 0;
        while (R > 0 && D > 0) {
            R = 0, D = 0;
            for (int i = 0; i < senate.size(); ++i) {
                char &c = senate[i];
                if (c == '_')
                    continue;
                if (c == 'R') {
                    if (d > 0)
                        c = '_', --d;
                    else
                        ++r, ++R;
                } else if (c == 'D') {
                    if (r > 0)
                        c = '_', --r;
                    else
                        ++d, ++D;
                }
            }
        }
        return R > 0 ? "Radiant" : "Dire";
    }
};
