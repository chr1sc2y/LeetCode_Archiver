class Solution {
public:
    bool isAdditiveNumber(string num) {
        int n = num.size();
        if (n < 3)
            return false;
        for (int i = 0; i < n / 2; ++i) {
            if (num[0] == '0' && i > 0)
                break;
            for (int j = i + 1; n - j > i && j - i <= n - j; ++j) {
                if (num[i + 1] == '0' && j - i > 1)
                    break;
                if (Support(stoll(num.substr(0, i + 1)), stoll(num.substr(i + 1, j - i)), num.substr(j + 1)))
                    return true;
            }
        }
        return false;
    }

    bool Support(long long x, long long y, string z) {
        if (z == "")
            return true;
        for (int i = 0; i < z.size(); ++i) {
            if ((z[0] == '0' && i > 0) || x + y < stoll(z.substr(0, i + 1)))
                return false;
            if (x + y == stoll(z.substr(0, i + 1)))
                return Support(y, x + y, z.substr(i + 1));
        }
        return false;
    }
};