class Solution {
public:
    bool isValid(string &S) {
        auto iter = S.find("abc");
        while (iter != string::npos) {
            S.erase(iter, 3);
            iter = S.find("abc");
        }
        return S.empty();
    }
};
