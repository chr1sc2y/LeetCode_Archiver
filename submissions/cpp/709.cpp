class Solution {
public:
    string toLowerCase(string str) {
        for (int i = 0; i < str.size(); ++i)
            str[i] = (str[i] >= \u0027A\u0027 && str[i] <= \u0027Z\u0027 ? str[i] += \u0027a\u0027 - \u0027A\u0027 : str[i]);
        return str;
    }
};