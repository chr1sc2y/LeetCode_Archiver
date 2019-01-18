class Solution {
public:
    string maskPII(string S) {
        for (int i = 0; i < S.size(); ++i) {
            if (S[i] >= \u0027A\u0027 && S[i] <= \u0027Z\u0027)
                S[i] -= (\u0027A\u0027 - \u0027a\u0027);
        }
        auto isMail = S.find(\u0027@\u0027);
        string ret;
        if(isMail != string::npos){
            ret.append (S, 0, 1);
            ret.append ("*****");
            ret.append (S.begin() + isMail - 1, S.end());
            }
        else {
            for (int i = 0; i < S.size(); ++i)
                if (S[i] >= \u00270\u0027 && S[i] <= \u00279\u0027)
                    ret.append (S, i, 1);
            for (int i = 0; i < ret.size() - 4; ++i)
                ret[i] = \u0027*\u0027;
            if(ret.size() == 10){
                ret.insert(3, "-");
                ret.insert(7, "-");
            }
            else if (ret.size() == 11) {
                ret.insert(1, "-");
                ret.insert(5, "-");
                ret.insert(9, "-");
            }
            else if (ret.size() == 12) {
                ret.insert(2, "-");
                ret.insert(6, "-");
                ret.insert(10, "-");
            }
            else if (ret.size() == 13) {
                ret.insert(3, "-");
                ret.insert(7, "-");
                ret.insert(11, "-");
            }
            if(ret.size() > 12)
                ret.insert(0, "+");
        }
        return ret;
    }
};