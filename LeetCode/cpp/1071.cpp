class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        int m = str1.size(), n = str2.size();
        if (m < n)
            return gcdOfStrings(str2, str1);
        for (int i = 1; i <= n; ++i) {
            if (n % i != 0 || m % (n / i) != 0)
                continue;
            string gcd = str2.substr(0, n / i);
            int s = gcd.size();
            bool flag = true;
            for (int j = 0; j < m / (n / i); ++j) {
                if (str1.substr(j * s, s) != gcd) {
                    flag = false;
                    break;
                }
            }
            if (flag)
                return gcd;
        }
        return "";
    }
};