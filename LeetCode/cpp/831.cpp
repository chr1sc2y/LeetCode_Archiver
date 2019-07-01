#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    string maskPII(string S) {
        for (int i = 0; i < S.size(); ++i) {
            if (S[i] >= 'A' && S[i] <= 'Z')
                S[i] -= ('A' - 'a');
        }
        auto isMail = S.find('@');
        string ret;
        if(isMail != string::npos){
            ret.append (S, 0, 1);
            ret.append ("*****");
            ret.append (S.begin() + isMail - 1, S.end());
            }
        else {
            for (int i = 0; i < S.size(); ++i)
                if (S[i] >= '0' && S[i] <= '9')
                    ret.append (S, i, 1);
            for (int i = 0; i < ret.size() - 4; ++i)
                ret[i] = '*';
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