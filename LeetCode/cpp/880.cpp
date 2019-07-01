class Solution {
public:
    string decodeAtIndex(string S, int K) {
        long long size = 0, i = 0;
        while (i < S.size()) {
            if (isdigit(S[i]))
                size *= (S[i] - '0');
            else
                ++size;
            ++i;
        }
        i == S.size() ? --i : 1;
        cout << i;
        while (i >= 0) {
            K %= size;
            if (K == 0 && !isdigit(S[i]))
                return S.substr(i, 1);
            if (isdigit(S[i]))
                size /= (S[i] - '0');
            else
                --size;
            --i;
        }
    }
};