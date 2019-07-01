class Solution {
public:
    string toLowerCase(string str) {
        for (int i = 0; i < str.size(); ++i)
            str[i] = (str[i] >= 'A' && str[i] <= 'Z' ? str[i] += 'a' - 'A' : str[i]);
        return str;
    }
};